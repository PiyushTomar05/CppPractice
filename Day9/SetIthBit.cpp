#include <iostream>
using namespace std;
int SetIthBit(int n,int i){
    int bitmask=1<<i;
    return (n|bitmask);
}

int main() {
    cout<<SetIthBit(6,3);
    return 0;
}