#include <iostream>
using namespace std;
void Print(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    Print(n-1);
};
void func(){
    cout<<"Stack Overflow";
    func();
};
int main() {
    Print(5);
    func();
    return 0;
}