#include <iostream>
using namespace std;
int ClearIthBit(int n,int i){
    int bitmask=~(i<<1);
    return (n & bitmask);
}

int main() {
    cout<<ClearIthBit(6,1);
    return 0;
}