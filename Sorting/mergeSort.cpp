#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid;
    int k = 0;
    int *temp = new int[high];
    while (i <= mid || j <= high)
    {
        while (arr[i] < arr[j] && i < mid)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        while (arr[j] < arr[i] && j < high)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
        while (i < mid)
        {
            arr[k++] = arr[i++];
        }
        while (j < high)
        {
            arr[k++] = arr[j++];
        }
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array entered :";
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    printArray(arr, n);
}