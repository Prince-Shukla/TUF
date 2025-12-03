#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    cout << endl;
}

void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    

}
int main(){
    int n;
    cout <<"Enter the length of the array:";
    cin>> n;
    // vector<int> arr; 
    int* arr= new int[n];
    cout << "Enter the elements: ";
    for (int  i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // arr.push_back(x);
        arr[i]=x;
    }
    cout << "the array entered:";
    printArray(arr, n);
    selectionSort(arr, n);
    cout<< "After selection sort:";
    printArray(arr, n);

    delete[] arr;

    
}