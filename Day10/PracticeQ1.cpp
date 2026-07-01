#include <iostream>
using namespace std;
class user{
    int id;
    string Password;
    public:
    string Username;

    user(int id){
        this->id=id;
    }

    string getPassword(){
        return Password;
    }
    void setPassword(string Password){
        this->Password=Password;
    }

};
int main() {
    user u1(101);
    u1.Username="Piyush Singh Tomar";
    u1.setPassword("Piyush1305@");
    cout<<u1.Username<<endl;
    cout<<u1.getPassword();
    return 0;
}