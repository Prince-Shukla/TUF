#include <bits/stdc++.h>
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

vector<int> Intersection(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> result;
    int a = arr1.size();
    int b = arr2.size();
    int i = 0, j = 0;
    while (i < a && j < b)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] == arr1[i])
        {
            result.push_back(arr2[j]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return result;
}

vector<int> Union(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> result;
    int a = arr1.size();
    int b = arr2.size();
    int i = 0, j = 0;
    while (i < a && j < b)
    {
        if (arr1[i] < arr2[j])
        {
            if (result.empty() || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            if (result.empty() || result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
            j++;
        }
        else
        { // arr1[i] == arr2[j]
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while (i < a)
    {
        if (result.empty() || result.back() != arr1[i])
        {
            result.push_back(arr1[i]);
        }
        i++;
    }
    while (j < b)
    {
        if (result.empty() || result.back() != arr2[j])
        {
            result.push_back(arr2[j]);
        }
        j++;
    }
    return result;
}
int main()
{
    int n1, n2;
    cout << "Enter the no of elements in the array 1:" << endl;
    cin >> n1;
    vector<int> arr1 = takeInput(n1);
    cout << "Enter the no of elements in the array 2:" << endl;
    cin >> n2;
    vector<int> arr2 = takeInput(n2);

    cout << endl
         << "Arrays Before: " << endl;
    printVector(arr1);
    printVector(arr2);
    // vector<int> result = Union(arr1,arr2);
    cout << endl << "Arrays after Intersection : " << endl;
    vector<int> result = Intersection(arr1, arr2);
    printVector(result);
}