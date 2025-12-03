#include <iostream>
#include <vector>
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

int maximumSumSubArray(vector<int> arr)
{
    int n = arr.size();
    int currentSum = 0;
    int maxSum = arr[0];  // initialize with first element instead of INT_MIN

    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];

        // if we found a new max
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        // if current sum becomes negative, reset it
        if (currentSum < 0)
        {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Sum = " << maxSum << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++)
        cout << arr[i] << " ";
    cout << endl;

    return (end - start + 1); // length of max sum subarray
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr = takeInput(n);

    cout << "\nArray: ";
    printVector(arr);

    cout << "Length of maximum sum subarray: "
         << maximumSumSubArray(arr) << endl;

    return 0;
}
