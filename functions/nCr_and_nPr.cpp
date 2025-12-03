#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int permutation(int n, int r)
{
    return (fact(n) / (fact(n - r)));
}

int combination(int n, int r)
{
    return (permutation(n,r)/fact(r));
}
int main()
{

    int a;
    int b;
    cout << "Enter the values:";
    cin >> a;
    cin >> b;
    cout << "Permutaions: " << permutation(a, b)<< endl;
    cout << "combinations: " << combination(a, b);
    return 0;
}