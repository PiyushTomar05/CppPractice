#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b ;
}
int multiply(int a,int b){
    return a*b;
}

int main(){
    int p,q;
    cout<<"Enter Num1 :";
    cin>>p;
    cout<<"Enter Num2 :";
cin>>q;
cout<<  "Sum is " << add(p,q)<<endl;
cout<<  "Sum is " << multiply(p,q);
return 0;
}