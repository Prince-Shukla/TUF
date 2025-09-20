#include<iostream>
using namespace std;
void fibonacci(int n, int i, int a, int b){
    if(i==n){
        return;
    }
    cout << a<< " ";  
    fibonacci(n,i+1,b,a+b);
}
int main(int argc, char const *argv[])
{
    cout << "Enter the no: ";
    int n ;
    cin >> n; 
    fibonacci(n,0,0,1);
    return 0;
}
