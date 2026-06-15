#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int binoCoff(int n,int r){
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);

    return val1/(val2*val3);
}

int main() {
    int n,r;
    cout<<"Enter n : ";
    cin>> n;
    cout<<"Enter r : ";
    cin>> r;

    cout<<"Binomial Cofficeint of "<<n<< " and "<< r<<" is "<<binoCoff(n,r);

    
    return 0;
}