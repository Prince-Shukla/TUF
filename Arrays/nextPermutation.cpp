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

// function for postive only
// better solution using hashing
// int maximumSumSubArray(vector<int> arr)
// {
//     int prefixSum = 0;
//     int n = arr.size();
//     int *hash = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         hash[i] = prefixSum + arr[i];
//     }
//     for (int i = 0; i < n + 1; i++)
//     {
//         if (hash[i] == 0)
//         {
//             return i;
//         }
//     }

// }

// function for postive and negative both using kadane algo
// optimal solution
int nextPermutation(vector<int> arr)
{
    // int sum = INT16_MIN;
    // int start=0,end=0;
    int n = arr.size();
    for (int i = n-1; i>=0; i--)
    {
        if (arr[i]>arr[i-1])    
        {
            break;
        }    
    }
    return ;
}

int main()
{
    int n;
    cout << "Enter the no of elements in the array :" << endl;
    cin >> n;
    vector<int> arr = takeInput(n);

    cout << endl
         << "Array : " << endl;
    printVector(arr);
    cout<<"the length of the maximum sum subarray is : "<<  maximumSumSubArray(arr)<< endl;
}
