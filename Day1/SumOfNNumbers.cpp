#include<iostream>
using namespace std;

int  SumN(int a ){
    int sum=0;
    for(int i=0;i<=a;i++){
        sum+=i;
    }
    return sum;
}


int main(){
    // cout<<"Enter Number : ";
    // int n;
    // cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<"Sum of first "<<n<<" numbers is "<<sum;

cout<<    SumN(5);
    return 0;
}