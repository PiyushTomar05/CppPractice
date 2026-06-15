#include <iostream>
using namespace std;

string largestOfNumber(int a,int b,int c ){
    if(a>b && a>c){
        return "A is largest";
    }
    else if(b>a && b>c){
        return "B is largest";
        
    }

    else {
        return "C is largest ";
    }
}

int square(int c,int d){
    return (c*c) + (d*d) +(2*c*d);
}

char nextChar(char a){
    if (a=='z'){
        return 'a';
    }
    return a+1;
}
int digitSum(int n){
    int sum=0;
    
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}

int reverse(int n){
    int reversed=0;
    while(n>0){
        reversed=reversed*10 + n%10;
        n=n/10;
    }
    return reversed;
}
bool isPalindrome(int n){
    int num= reverse(n);
    return n==num;
}
int main() {
    int k;
    cout<<"Enter Digit : ";
    cin>>k;
    cout<<"Sum Of Digits is : "<<digitSum(k);
    cout<<"Reverse Of Number is : "<<reverse(k);
    cout<<"Is Palindrome : "<<isPalindrome(k);
    // int A,B,C;
    // cout<<"Enter A ";
    // cin>>A;
    // cout<<"Enter B ";
    // cin>>B;
    // cout<<"Enter C ";
    // cin>>C;
    // cout<<"Largest Of Three Number is : "<<largestOfNumber(A,B,C)<<endl;  
    // cout<<"Whole Square of A and B is : "<<square(A,B)<<endl;
    // cout<<"Enter Character : ";
    // char D;
    // cin>>D;
    // cout<<nextChar(D);
    return 0;
}