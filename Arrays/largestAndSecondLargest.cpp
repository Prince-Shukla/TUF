#include <iostream>
#include<vector>
using namespace std;
void printVector(vector<int> arr)
{
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}

vector<int> takeInput(int n)
{
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    return arr;
}
int main(){
    // cout<< "hello ";
    vector<int> arr= takeInput(5);
    int largest=arr[0];
    int s_largest=INT64_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
        else if(arr[i]>s_largest && arr[i]!=largest){
            s_largest=arr[i];
        }
    }
    cout<< "largest: "<<largest << endl;
    cout<< "second largest: "<<s_largest;
    
    return 0;
}