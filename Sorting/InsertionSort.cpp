#include <iostream>
#include <vector>
using namespace std;

// insertion sort is to select the minimum and place it to the last of the sorted portion of the array
// and keep repeating this untill the whole array is sorted
// TC is n square

int *takeinput(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr[i] = element;
    }
    return arr;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        i++;
    }
}

void InsertionSort1(int arr[], int n)
{
    for (int i=1;i<n;i++)
    {
        int j=i-1;
        int key = arr[i];
        while (j>=0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    cout << "Enter the no of elements:";
    int n;
    cin >> n;
    int *arr = takeinput(n);
    cout << "the array is :" << endl;
    printArray(arr, n);
    cout << "Array after selection sort:" << endl;
    InsertionSort1(arr, n);
    printArray(arr, n);
    return 0;
}