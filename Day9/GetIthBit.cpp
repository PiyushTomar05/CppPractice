#include <iostream>
using namespace std;
int GetIthBit(int n,int i){
    int bitmask=1<<i;
    if(n&bitmask ==0){
        return 0;
    }else{
        return 1;
    }
}
int main() {
    cout<<GetIthBit(6,2)<<endl;
    cout<<GetIthBit(7,1)<<endl;
    
    return 0;
}
