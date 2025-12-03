#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> takeInput(int n)
{
    int temp;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element";
        cin >> temp;
        arr.push_back(temp);
    }
    return arr;
}

//     // Optimal

// int missingNumber(vector<int> arr){
//     int sum=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum+=arr[i];
//     }
//     int n= arr.size()+1;
//     int ans= (n*(n+1))/2-(sum);
//     return ans;
// }

// using hashing

int missingNumber(vector<int> arr){
    int n=arr.size();
    int hash[n+1]={0};
    // int* hash = new int[n+1];
    // better solution using hashing
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]=1;
    }
    for (int i = 0; i < n+1; i++)
    {
        if (hash[i]==0)
        {
            return i;
        }
    }
    // delete[] hash;
}


int main()
{
    int n;
    cout << "Enter the no of elements in the array :" << endl;
    cin >> n;
    vector<int> arr= takeInput(n);
    

    cout << endl<< "Array : " << endl;
    printVector(arr);
    cout<< "the missing number is: "<< missingNumber(arr);
}