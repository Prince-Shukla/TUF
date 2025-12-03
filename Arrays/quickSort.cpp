#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>arr,int low,int high,int n){
    int pivot=arr[0];
    int i=-1;
    int j=n-1;
    while(i<=j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        swap()
    }
}
void quicksort(vector<int>arr,int low,int high,int n){
    while(low<high){
        int pivotInd=partition(arr,low,high,n);
        quicksort(arr,low,pivotInd,n);
        quicksort(arr,pivotInd+1,high,n);
    }
}
int main(){
    vector<int> arr={10,20,0,30,5,40,34};
}