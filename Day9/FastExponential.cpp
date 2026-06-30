#include <iostream>
using namespace std;
int FastExo(int X,int N){
    int ans=1;
    while(N>0){
        int lastBit=N&1;
        if(lastBit){
            ans=ans*X;
        }
        X=X*X;
        N=N>>1;
    }
    cout<<ans<<endl;
    return ans;
}

int main() {
    FastExo(3,5);
    return 0;
}