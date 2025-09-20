#include <iostream>
using namespace std;

void reverseArray(int A[], int i, int n)
{
    if (i < n / 2)
    {
        int temp = A[i];
        int j = n - i - 1;
        A[i] = A[j];
        A[j] = temp;
        reverseArray(A, i + 1, n);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* A = new int[n];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    reverseArray(A, 0, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    delete[] A;
    return 0;
}
