#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int LinearSearch(vector<int> arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            cout << "The first occurance is at index " << i << endl;
            int temp;
            while (i < arr.size())
            {
                if (arr[i] == key){
                    i=temp;
                }
            }
            cout << "The last occurance is at index
             " << i - 1 << endl;
            return i;
        }
    }
    return -1;
}

void mZe(vector<int> &arr)
{
    int i = 0, j = -1;
    while (i < arr.size() && arr[i] != 0)
    {
        j++;
        i++;
    }
    // the above while loop is just to avoid the swappping of the starting non zeroes
    while (i < arr.size())
    {
        if (arr[i] != 0)
        {
            j++;
            swap(arr[i], arr[j]);
        }
        i++;
    }
}
int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    // int * arr= new int[n];
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " th element " << endl;
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "array before: " << endl;
    printArray(arr);
    cout << LinearSearch(arr, 4);
    // mZe(arr);
    // cout << "Array after: " << endl;
    // printArray(arr);
}