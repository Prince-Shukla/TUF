#include <bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void reverse(int*arr, int i,int j){
//     while(i<=j){
//         // arr[i]=arr[i]^arr[j];
//         // arr[j]=arr[i]^arr[j];
//         // arr[i]=arr[i]^arr[j];
//         int temp = arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
// }
void LrotateN(int *arr, int n,int d){
    int i=0;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    // the by defalut reverse funstion in cpp stl does not include the ending iterator

//     reverse(arr,i,d-1);
//     reverse(arr,d,n-1);
//     reverse(arr,i,n-1);
}

void RrotateN(int *arr, int n,int d){
    int i=0;
    d=(2*d)%n;
    reverse(arr,arr+n);
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
}
int main()
{
    int n;
    cout << "Enter the no of elements in the array: " << endl;
    cin >> n;
    int d;
    cout<< "Enter how many places to rotate the array: ";
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
    LrotateN(arr,n,d%n);
    printArray(arr,n);
    cout<< "array after right rotation by d places : "<< endl;
    RrotateN(arr,n,d%n);
    printArray(arr,n);
}