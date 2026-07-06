#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0) return 0;
    return n*factorial(n-1);
}

int main() {
    int n=5;
    factorial(5);
    return 0;
}