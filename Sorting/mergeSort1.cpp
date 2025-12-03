#include <iostream>
using namespace std;
void merge(int* arr,int low,int mid, int high){
    int temp[high];
    int i=low;
    int j=mid+1;
    int k=0;
    while(i<=mid || j<=high){

        while(i<mid&&arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        while(j<high&&arr[i]>arr[j]){
            temp[k]=arr[mid+1];
            j++;
            k++;
        }
        while(i<mid){
            temp[k]=arr[i];
            i++;
            k++;
        }
        while (j<high){
            temp[k]=arr[j];
            j++;
            k++;
        }
        k=0;
        while (k<high)
        {
            arr[k]=temp[k];
        }
        
    }
}

void mergeSort1(int* arr, int low, int high){
    if(low==high){
        return;
    }
    int mid=low+(high-low)/2;
    mergeSort1(arr,low,mid);
    mergeSort1(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    int*  arr= new int[n];
    cout<<"performing merge sort"<< endl;
    cout<< "enter the no of elements ";
    cin>> n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< "array before:"<< endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    mergeSort1(arr,0,n-1);
    cout<< endl;
    cout<< "array after:"<< endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }

}