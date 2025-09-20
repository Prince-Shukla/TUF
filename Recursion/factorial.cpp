#include<iostream>
using namespace std;

// using functional recursion
int factorial(int n){
    if(n==0 || n ==1){
        return 1;
    }
    if(n<0){
        return -1; // factorial not defined for negative numbers
    }
    return n*factorial(n-1);
}

// using parametrised recursion
// void factorial1(int n, int product){
//     if(n==1){
//         cout << product;
//     }
//     factorial1(n-1,product*n);
// }


int main(int argc, char const *argv[])
{
    cout << "Enter a number to find the factorial: ";
    int n ;
    cin >> n; 
    cout << factorial(n) << endl;
    cout << "the factorial of the no using parametrerised recursion is " ;
    // factorial1(n,1);
    return 0;
}

