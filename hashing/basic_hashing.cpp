#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int *hashing(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int *hash = new int[max + 1](); // Initialize all elements to 0
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    return hash;
}

int main()
{
    cout << "Enter the no of elements in the array : ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);
    cout << endl;

    // Find the maximum value in arr to determine hash array size
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Hashing the array : ";
    int *hash = hashing(arr, n);
    cout << "how many numbes to search:";
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number to search: ";
        int num;
        cin >> num;
        if (num >= 0 && num <= max)
        {
            cout << "Frequency of " << num << " is: " << hash[num] << endl;
        }
        else
        {
            cout << "Number out of range." << endl;
        }
    }

    delete[] arr;
    delete[] hash;
    return 0;
}