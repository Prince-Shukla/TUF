#include <iostream>
using namespace std;

void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(A, i, j);
        }
        

    }
    swap(A, low, j);
    return j;
}

void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(A, low, high);
        quickSort(A, low, pIndex - 1);
        quickSort(A, pIndex + 1, high);
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout <<"The array input"; 
    printArray(A, n);
    cout <<"After sorting ";
    quickSort(A,0,n);
    for (int i = 0; i < n; i++)
    {
        cout <<A[i];
    }
    
    delete[] A;

    return 0;
}
