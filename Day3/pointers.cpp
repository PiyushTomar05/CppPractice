#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *ptr=&a;

    cout<<"Value of a is : "<<a<<endl;
    cout<<"Address of a is : "<<&a<<endl;
    cout<<"Value of ptr is : "<<*(&a)<<endl;

    // char b='A';
    // char *ptr2=&b;

    // float pi=3.14;
    // float *ptr3=&pi;

    // int **pptr=&ptr;
    // cout<<sizeof(ptr)<<endl;

    // cout<<&a<<" == "<<ptr<<endl;
    // cout<<&b<<" == "<<ptr2<<endl;
    // cout<<&pi<<" == "<<ptr3<<endl;
    // cout<<&ptr<<" == "<<pptr<<endl;
    return 0;
}