#include<iostream>
using namespace std;

int factorial( int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
 
 cout<<"Factorial of 10 is "<< factorial(10);

    return 0;
}