#include <iostream>
using namespace std;
void printArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int *hashing(string str)
{
    int *hash = new int[26]();
    for (int i : str)
    {
        hash[i - 'a']++;
    }
    return hash;
}

int main()
{
    string str;
    int size;
    cout << "Enter the string:";
    cin >> str;
    int* hash = hashing(str);
    cout<< "how many elements to search: ";
    cin >> size;
    char* A = new char[size];
    cout<< "Enter the elements to search: ";
    for (int  i = 0; i < size; i++)
    {
        cin >> A[i];
        cout << " " << hash[A[i]-'a'] << endl;
    }

    


    
    // int character; cin >> character;

    return 0; 
}
