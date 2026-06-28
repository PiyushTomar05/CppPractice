#include <iostream>
using namespace std;

void OddorEven(int num){
    if(!(num&1)){
        cout<<"Even\n";
    }else{
        cout<<"Odd\n";
    }
}

int main() {
    OddorEven(5);
    OddorEven(6);
    OddorEven(51);
    OddorEven(50);
    
    return 0;
}