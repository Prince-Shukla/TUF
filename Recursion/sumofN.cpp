#include<iostream>
using namespace std;
void printsum(int n, int sum){
    if(n== 0){
        cout << " sum is: " << sum << endl;
        return;

    }
    printsum(n - 1, sum + n);
}
int printsum(int n){
    if(n==0){
        return 0;
    }
    return n + printsum(n - 1);
}

// using backtracking

int printsum(int n){
    static int sum = 0;
    if(n==0){
        cout << " sum is: " << sum << endl;
        return;

    }
    sum += n;
    printsum(n - 1);
}
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    printsum(n, 0);
    cout << "Sum of first " << n << " natural numbers is: " << printsum(n) << endl;
    printsum(n);
    return 0;
    
}