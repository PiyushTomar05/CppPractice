#include <iostream>
using namespace std;

int main() {
    int digitSum=0;
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    while(num>0){
        int lastDigit =num%10;
        num=num/10;
         digitSum+= lastDigit;
    }
    cout<<digitSum;
    return 0;
}