#include<iostream>
using namespace std;
char upperTOlower(char s)
    { 
        return s + 32;
    }
int main(){
    char s;
    cout<< "Enter character ";
    cin>> s;
    char newchar= s+32;
    cout << newchar;
    cout << upperTOlower('A');
    
    return 0;
}