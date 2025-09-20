#include<iostream>
using namespace std;

void printPattern(int n){
    // for(int i=0; i<n; i++){
    //     cout << "Prince" << endl;
    //     }

    // base condition
    if (n<=0)
    {
        return;
    }
    
    cout << "Prince " << endl;
    printPattern(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "no of times to repeat ";
    cin >> n;
    printPattern(n);
    return 0;
}
