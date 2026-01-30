#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is an Even Number";
    }else{
        cout<<n<<" is an odd Number";
    }
    return 0;
}