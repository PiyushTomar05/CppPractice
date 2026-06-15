#include <iostream>
using namespace std;
 
void BintoDec(int BinNum){
    int n= BinNum;
    int decimal=0;
    int pow =1;

    while(n>0){
    int lastdigit =n%10;
    decimal += lastdigit*pow;
    pow=pow*2;
    n=n/10;
    }
    cout<<decimal<<endl;
}

void DectoBin(int dec){
    int n= dec;
    int pow=1;
    int bin=0;

    while(n>0){
        int rem=n%2;
        bin += rem * pow;
        n=n/2;
        pow=pow*10;
    }
    cout<<bin<<endl;
}

int main() {
    BintoDec(101);
    DectoBin(5);
    return 0;
}