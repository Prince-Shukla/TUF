#include <iostream>
using namespace std;
int sum(int a, int b)
{ // here the a and b are the parameters or the formal arguements
    int sum = a + b;
    return sum;
}
int main()
{

    int a;
    int b;
    cout << "Enter the values:";
    cin >> a;
    cin >> b;
    sum(a, b); // here the variables a and b which are passed are the actual arguements
    // and are called arguements
    return 0;
}