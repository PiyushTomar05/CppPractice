#include <iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }

    return fact;
}


int main() {
    // int n;
    // cout<<"Enter Number : ";
    // cin>>n;
    // int fact=1;
    // for (int i=1;i<=n;i++){
    //     fact=fact*i;
    // }
    // cout<<"Factorial of "<<n<<" is "<<fact;
    
    cout<<factorial(5);
    return 0;
}