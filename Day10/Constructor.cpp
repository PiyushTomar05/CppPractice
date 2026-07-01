#include <iostream>
using namespace std;
class car{
    string name;
    string color;
    public:
    // car(string namval,string colorval){
    //     cout<<"Construtor is Called.Object is created. \n";
    //     name=namval;
    //     color=colorval;
    // }


    //Perfect Example of Constructor Overloading
    car(){
        cout<<"Construtor is Called.Non Parameterized Construtor\n";
    }
    car(string name,string color){
        this->name=name;
        this->color=color;
        // *this.color=color;
        cout<<"Construtor With Parameter\n";
    }

    void start(){
        cout<<"Car has Started\n";
    }
    void stop(){
        cout<<"Car has Stopped\n";
    }
    string getName(){
        return name;
    }
};

int main() {
    car c0;
    car c1("Gwagon","Blue");
    cout<<"Car Name : "<<c1.getName();
    return 0;
}