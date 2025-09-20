#include<iostream>
using namespace std;

void printPattern(int n) {
    if (n == 0) {
        return;
    }
    cout << n << endl;
    printPattern(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "from where to print the pattern? " ;
    cin >> n;
    printPattern(n);
    return 0;
}
