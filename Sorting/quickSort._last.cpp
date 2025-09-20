#include<iostream>
using namespace std;
void quickSort(int A[], int low, int high){
    if(low<high){
        int pivot=A[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(A[j]<pivot){
                i++;
                swap(A[i],A[j]);
            }
        }
        swap(A[i+1],A[high]);
        int pIndex=i+1;
        quickSort(A,low,pIndex-1);
        quickSort(A,pIndex+1,high);
    }
}
void printArray(int A[], int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    if (!cin || n <= 0) {
        cout << "Invalid array size input." << endl;
        return 1;
    }
    int *A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "The array input: "; 
    printArray(A, n);
    quickSort(A,0,n-1);
    cout << "After sorting: ";
    printArray(A, n);
    delete[] A;
    
    return 0;
}

