#include <iostream>
#include<string>
using namespace std;
class student{
    string Fname;
    float cgpa;
    
    public:
    void getPercentage(){
        cout<<(cgpa*10)<<endl;
    }

    //Setters
    void setName(string namval){
        Fname=namval;
    }
    void setCgpa(float cgpaval){
        cgpa=cgpaval;
    }

    //Getters
    string getName(){
        return Fname;
    }
    float getCgpa(){
        return cgpa;
    }
};
int main() {
    student s1;
    s1.setName("Piyush");
    s1.setCgpa(9.2);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;
}