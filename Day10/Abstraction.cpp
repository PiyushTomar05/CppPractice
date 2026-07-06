#include <iostream>
using namespace std;
//abstract Class
class shape{
    public:
    virtual void draw()=0;//Abstract Fxn //Pure Virtual FXN
};
class circle: public shape{
    public:
    void draw(){
        cout<<"Circle Drawn";
    }
};
class square: public shape{
    public:
    void draw(){
        cout<<"Square Drawn";
    }
};
int main() {
    circle c1;
    c1.draw();
    return 0;
}