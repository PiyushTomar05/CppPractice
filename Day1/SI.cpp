#include <iostream>
using namespace std;

int main() {
    int p,r,t,SI;
    cout<<"Enter Principle Amount : ";
    cin>>p;
    cout<<"Enter Rate of Interest : ";
    cin>>r;
    cout<<"Enter Time : ";
    cin>>t;
    
    SI= (p*r*t)/100;
    cout<<"Simple Interset is "<< SI;
    return 0;
}