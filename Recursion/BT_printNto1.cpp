#include<iostream>
using namespace std;

void printPattern(int n,int m) {
    if (m > n)
    {
        return;
    }
    printPattern(n, m + 1);
    cout << m << endl;
    
}
int main(int argc, char const *argv[])
{
    int n; 
    cout << "Till where to print the pattern?";
    cin >> n;

    printPattern(n,1);

    return 0;
}
