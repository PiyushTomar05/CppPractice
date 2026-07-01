#include <iostream>
using namespace std;
class Print{
    public:
    void show(int x){
        cout<<x<<endl;
    }
    void show(string b){
        cout<<b<<endl;
    }
};
class Complex{
    int real;
    int img;
    public:
    Complex(int r,int i){
        real=r;
        img=i;
    }

    void Show(){
        cout<<real<<" + "<<img<<"i\n";
    }
    //Operator Overloading
    void operator + (Complex &c2){
        int resReal=this->real+c2.real;
        int resImg=this->img+c2.img;
        Complex c3(resReal,resImg);
        c3.Show();
    }
};
int main() {
    Print obj1;
    obj1.show(23);
    obj1.show("Piyush");
    Complex c1(2,4);
    c1.Show();
    Complex c2(5,4);
    c2.Show();
    c1+c2;
    return 0;
}