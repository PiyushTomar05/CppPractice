#include <iostream>
using namespace std;

bool IsPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

void primeNumbers(int q){
    for(int i = 2; i <= q; i++){
        if(IsPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int a;

    cout << "Enter N : ";
    cin >> a;

    primeNumbers(a);

    return 0;
}