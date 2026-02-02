#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Num: ";
    cin>>n;
    bool isPrime= true;

    // for(int i=2;i<=(n-1);i++){
    //     if(n%i==0){
    //         isPrime=false;
    //         break;
    //     }
    // }

    // we have used this condition to not check repeated factors
    
    for(int i=2;(i*i)<=n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Number "<<n<<" is Prime Number";
    }else{
        cout<<"Number "<<n<<" is not Prime Number";
    }
    return 0;
}