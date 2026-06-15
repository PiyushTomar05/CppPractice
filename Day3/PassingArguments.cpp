#include <iostream>
using namespace std;

//Pass By Value
void ChangeA(int a){
    a=20;
}

//Pass By Pointer
void ChangeB(int *b){
    *b=30;
}

int main() {
    // int a=10;
    // int b=20;
    // cout<<"Value of a is : "<<a<<endl;
    // ChangeA(a);
    // cout<<"Value of a is : "<<a<<endl;
    // ChangeB(&b);
    // cout<<"Value of b is : "<<b<<endl;

    //Pass By Reference
    int c=10;
    int &d=c;
    d=35;
    cout<<"Value of c is : "<<c<<endl;
    cout<<"Value of d is : "<<d<<endl;



    return 0;
}