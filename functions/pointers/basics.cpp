#include <iostream>
using namespace std;
void print(int **a)
{
    cout << "a is:" << a;
    cout << "the value contained by a is" << *a;
    cout << "the value of the variable is " << **a;
}

// function to create jaggered array
int** Two_D_array(int rows,int columns){
    int** arr= new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        // int* rowPointer=new int[columns];
        arr[i]=new int[columns];
    }
    return arr;
}

int** initializer_array(int**  arr,int rows,int columns){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Enter "<<i << "th row and "<<j<< " th column element "<< endl ;
            cin >>arr[i][j];
        }
        
    }
    return arr;
}
int** jaggedArray(int rows){
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        int temp;
        cout<< "Enter the no of columns for  "<< i+1<< "th row";
        cin >> temp;
        arr[i]=new int[temp];
        for(int j=0;j<temp;j++){
            cout<< "enter the "<<i+1 << "th row and " << j+1 << "th column element: ";
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            /* code */
        }
        
    }
    
    
}

int main()
{
    int rows;
    int columns;
    cout<< "Enter rows: ";
    cin >> rows;
    // cout<< "Enter columns: ";
    // cin >> columns;
    // int** arr=Two_D_array(rows,columns);
    int** arr=jaggedArray(rows);
    initializer_array(arr,rows,columns);



    // int* ptr =&a;

    // int ** ptr1= & ptr;
    // print(ptr1);
    // char arr[100]={'a','b','c','d','e','f','g','h'};
    // char arr1[]="abdhskoegpoihsdoghsoge";
    // cout<<sizeof(arr);
    // cout << arr1;

    // char ch[6]="abcde";
    // cout<< ch<< endl;
    // char* ptr = "a";
    // cout <<ptr << endl;
    // double arr[10];
    // cout<< sizeof(arr)<< endl;
    // double* temp=arr;
    // cout<< sizeof(temp)<< endl;
    // double* temp1=&arr[0];
    // cout<< sizeof(temp1)<< endl;
    // double a = 10;
    // cout<<"Size of double: "<<sizeof(a);
    // double *ptr = &a;
    // // int *ptr1=arr;
    // cout<< "size of the pointer"<< sizeof(ptr);

    // cout<< arr<< "hi "<<endl;
    // cout<< arr+1 <<endl;

    // int *ptr1 = new int[a];
    // int &ref = a;
    // cout<< ptr1<< endl;
    // arr=&a; // this is invalid because arr which was a pointer to the first memory location
    // of the array, it can't be made to point to the address of a, because if allowed in that
    // case the starting address of the array will be lost and we will never be able to itereate
    // through the array
    // ptr1= &a;// this is valid because now ptr1 will start pointing to a memory address of a

    // cout<< ptr1;
    // cout << "ptr= &a " << (ptr == &a) << endl;
    // cout << "&ref =a " << (&ref == ptr) << endl;
    // cout << "adress of ref:" << &ref;
    // cout << "adress of a:" << &a;

    return 0;
}