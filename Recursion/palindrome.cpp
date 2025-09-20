#include <iostream>
using namespace std;
bool reverseArray(char A[], int i, int m)
{
    if (i >= m / 2)
    {
        return true;
    }
    if (A[i] != A[m - i - 1])
    {
        return false;
    }
    return reverseArray(A, i + 1, m);
}
int main(int argc, char const *argv[])
{
    int n;
    // cout << "Enter the length of the array: ";
    cout << "Enter the length of the string: ";
    cin >> n;
    // int* A= new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }
    char* A = new char[n + 1];
    cin >> A;
    A[n] = '\0'; // Null-terminate the string
    if (reverseArray(A, 0, n))
    {
        cout << "The array is a palindrome" << endl;
    }
    else
    {
        cout << "The array is not a palindrome" << endl;
    }
    delete[] A;
    return 0;
}

