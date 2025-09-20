#include<bits/stdc++.h>
// #include<map>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

unordered_map<int, int> hashing(int arr[], int n){
    unordered_map <int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    return mpp;
}

int main(){
    int n ;
    cout<< "Enter the length of the array: ";
    cin >> n; 
    int* arr= new int [n];
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr,n);
    cout << "How many elements to search ";
    int s;
    cin>> s ;
    unordered_map<int , int> mpp = hashing(arr,n);
    for(int i= 0;i<s;i++){
        int temp;
        cout<< "enter element to search: "<< endl;
        cin>>temp;
        cout<< mpp[temp]<< " times"<< endl;
    }

    

}