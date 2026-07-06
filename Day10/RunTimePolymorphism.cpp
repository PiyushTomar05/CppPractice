#include <iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"Parent class Show";
    }
    virtual void hello(){
        cout<<"Parent Hello";
    }
};
class child:public Parent{
    public:
    void show(){
        cout<<"Class Show..";
    }
    void hello(){
        cout<<"Child Hello";
    }
};
int main() {
    child ch1;
    Parent *ptr;
    ptr = &ch1;
    ptr->hello();
    return 0;
}