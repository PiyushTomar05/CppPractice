#include <iostream>
#include<string>
using namespace std;

int main() {
    string str="Piyush Singh";

    cout<<str.length()<<endl;
    cout<<str.at(2)<<endl;
    cout<<str.substr(0,3)<<endl;
    cout<<str.find("Tomar");
    return 0;
}