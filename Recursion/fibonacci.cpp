#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fno;
    if (n >= 2)
    {
       return fibo(n - 1) + fibo(n - 2);
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the no: ";
    cin >> n;
    // fibo(n);
    int i;
    cout << fibo(0) << endl;
    for (i = 0; i < n; i++)
    {
        cout << fibo(i) <<" ";
    }
    
    return 0;
}

