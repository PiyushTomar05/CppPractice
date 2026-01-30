#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter num1 : ";
    cin>>n;
    cout<<"Enter num2 : ";
    cin>>m;

    if(n>m){
        cout<<"Num1 "<<n <<" is Greater";
    }else{
        cout<<"Num2 "<<m<<" is Greater";
    }
    return 0;
}