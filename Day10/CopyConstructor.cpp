#include <iostream>
#include <string>
using namespace std;
class car{
    public:
    string name;
    string color;
     int *mileage;
    car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int; //Dynamic Allocation
        *mileage=12;
    }
    //Shallow Copying 

    // car (car &original){
    //     cout<<"Copying original Constructor...\n";
    //     name=original.name;
    //     color=original.color;
    //     mileage=original.mileage;
    // }

    //Deep Copying Mileage
    car (car &original){
        cout<<"Copying original Constructor...\n";
        name=original.name;
        color=original.color;
        mileage=new int;
        *mileage=*original.mileage;
    }

    //Destructor
    ~car(){
        cout<<"destructor Invoking..\n";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }

    }
};
int main() {
    car c1("Swift","Black");
    car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;

    *c2.mileage=10; //Shallow Copying Example
    cout<<*c1.mileage<<endl;
    return 0;
}