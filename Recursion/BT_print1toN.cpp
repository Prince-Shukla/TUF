#include<iostream>
using namespace std;

void printPattern(int n) {
    if (n == 0)
    {
        return;
    }
    printPattern(n - 1);
    
    cout << n << endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Till where to print the pattern?" << endl;
    cin >> n;
    printPattern(n);
    return 0;
}
