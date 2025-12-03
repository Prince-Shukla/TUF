#include<iostream>
using namespace std;

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

void BubbleSort(int arr[], int n) //optimized bubble sort
{
    for (int i= 0; i <n-1; i++)
    {
        int swapcount=0;
        for (int j =0; j <n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j+1], arr[j]);
                swapcount++;
            }
        }
        if(swapcount==0){
            return;
        }
    }
}

void bubbleSortReverse(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int swapcount = 0;
        for (int j = n - 1; j > n - i-1 ; j--) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j-1], arr[j]);
                swapcount++;
            }
        }
        if (swapcount == 0) {
            return;
        }
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
    cout << "Array after bubble sort:" << endl;
    // BubbleSort(arr,n); 
    bubbleSortReverse(arr,n);
    printArray(arr, n);
    return 0;
}