#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    if(ch>=65 && ch<=90 ){
        cout<<"UpperCase";
    }else{
        cout<<"LowerCase";
    }
    return 0;
}