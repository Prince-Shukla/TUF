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

// better solution and filling using counting method
// the time complexity here is O(2n)

// void sort0_1_2(vector<int> &arr){
//     int cnt0=0;
//     int cnt1=0;
//     int cnt2=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i]==0)  
//         {
//             cnt0++;
//         }
//         else if (arr[i]==1)
//         {
//             cnt1++;
//         }
//         else{
//             cnt2++;
//         }
//     }
//     for (int i = 0; i < cnt0; i++)
//     {
//         arr[i]=0;
//     }
//     for (int i = cnt0; i < cnt0+cnt1; i++)
//     {
//         arr[i]=1;
//     }
//     for (int i = cnt0+cnt1; i < arr.size(); i++)
//     {
//         arr[i]=2;
//     }
    
// }

// using dutch national flag algo

void sort0_1_2(vector<int> &arr){
    // all 0s are from staring to low-1
    // all 1s are from low to mid-1
    // all the 2s are from high+1 to end
    // the portion from mid to high is unsorted
    
    // the key idea is to keep the pointer for placing the zeroes at the front 
    // and increment the pointer and swap to the last of the unsorted portion
    // if the element is 2 

    int n =arr.size();
    int low=0,mid=0;
    int high=n-1;// keeping high at the last index
    while (mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    
}


int main()
{
    int n;
    cout << "Enter the no of elements in the array :" << endl;
    cin >> n;
    vector<int> arr= takeInput(n);
    

    cout << endl<< "Array : " << endl;
    printVector(arr);
    sort0_1_2(arr);
    cout << endl<< "Array after sorting : " << endl;
    printVector(arr);
}