#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eats\n";
    }
    void breathe(){
        cout<<"Breathes\n";
    }
};
class Mammals:public Animal{
    public:
    string blood;
    Mammals(){
        blood="Warm";
    }
};
class Dog:public Mammals{
    public:
    void tail(){
        cout<<"Dog has a tail"<<endl;
    }
};
int main() {
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tail();
    cout<<d1.blood<<endl;
    return 0;
}