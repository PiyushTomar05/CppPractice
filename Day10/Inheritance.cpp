#include <iostream>
using namespace std;
class Animal{
    public:
    string color;

    void eat(){
        cout<<"Eats\n";
    }
    void breathe(){
        cout<<"Breathes\n";
    }
};
class fish : public Animal{
    public:
    int fins;

    void swim(){
        cout<<"Swims\n";
    }
};
int main() {
    fish f1;
    f1.fins=3;
    f1.swim();
    f1.eat();
    cout<<f1.fins;
    return 0;
}