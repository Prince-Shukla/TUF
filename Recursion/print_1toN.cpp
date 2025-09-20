#include <iostream>
using namespace std;
void printPattern(int n, int m)
{
    cout << m<< endl;
    if (n==m)
    {
        return;

    }
    printPattern(n, m+1);
}
int main(int argc, char const *argv[])
{
    cout << "Till where to print the pattern?" << endl;
    printPattern(5,1);

    return 0;
}

