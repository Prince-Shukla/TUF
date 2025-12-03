#include <iostream>
#include <vector>
using namespace std;

// selection sort is to select the minimum and place it to the last of the sorted portion of the array 
// and keep repeating this untill the whole array is sorted
// TC is n square

int* takeinput(int n)
{
    int* arr= new int[n];
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr[i]=element;
    }
    return arr;
}

void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{
    cout << "Enter the no of elements:";
    int n;
    cin >> n;
    int* arr = takeinput(n);
    cout << "the array is :" << endl;
    printArray(arr, n);
    cout << "Array after selection sort:" << endl;
    SelectionSort(arr,n); 
    printArray(arr, n);
    return 0;
}