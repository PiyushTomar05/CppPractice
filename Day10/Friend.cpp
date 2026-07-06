#include <iostream>
using namespace std;

class A{
    string secret="Secret Data";
    friend class B;
    friend void RevealSecret(A &obj);
};
class B{   //becomes Friend class of A One way Sharing A->B;
    public:
    void ShowSecret(A &obj){
        cout<<obj.secret;
    }
};
void RevealSecret(A &obj){
    cout<<obj.secret<<endl;
}
int main() {
    A a;
    B b;
    // b.ShowSecret(a);
    RevealSecret(a);
    return 0;
}