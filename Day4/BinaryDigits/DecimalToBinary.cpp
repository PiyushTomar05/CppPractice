#include <iostream>
using namespace std;
int dectoBinary(int n){
    int pow=1,ans=0;
    while(n>0){
        int rem=n%2;
        n/=2;

        ans+=(rem*pow);
        pow*=10;
    }

    return ans;
}
int main() {
    int n=50;
    

    cout<<dectoBinary(n);
    
    return 0;
}