#include <iostream>
using namespace std;

void ClearLastIthBits(int num,int i){
    int mask= ~0<<i;
    num =num & mask;
    cout<<num<<endl;
}

int main() {
    ClearLastIthBits(15,2);
    return 0;
}