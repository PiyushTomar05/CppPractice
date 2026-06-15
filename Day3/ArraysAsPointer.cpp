#include <iostream>
using namespace std;

void func(int arr[]){
    arr[0]=100;
}
void func2(int *ptr){
    ptr[0]=100;
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    // int a=5;
    // int *ptr=&a;
    // cout<<ptr<<endl;
    int arr[5]={1,22,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    // cout<<arr<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;

    // func(arr);
    // cout<<arr[0]<<endl;
    // func2(arr);
    // cout<<arr[0]<<endl;

    printArr(arr,n);

    return 0;
}