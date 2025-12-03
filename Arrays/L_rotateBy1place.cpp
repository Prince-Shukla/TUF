#include <iostream>
using namespace std;
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void LrotateN(int *arr, int n,int d){
    int* temp= new int[d];
    int i=0;
    for (; i < d; i++)
    {
        temp[i]=arr[i];
    }
    
    while(i<n)
    {
        arr[i-d]=arr[i];
        i++;
    }
    i=0;
    while(i<d){
        arr[n-d+i]=temp[i];
        i++;
    }   
}
int main()
{
    cout << "Enter the no of elements in the array:" << endl;
    int n;
    cin >> n;
    int d;
    cout<< "Enter how many places to ratate the array: ";
    cin >> d;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the"<< i+1<< "th element ";
        cin >> arr[i];
    }
    cout<<"array Before: "<< endl;
    printArray(arr,n);
    cout<< "array after rotation by d places : "<< endl;
    LrotateN(arr,n,d );
    printArray(arr,n);
}