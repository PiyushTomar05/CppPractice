#include <iostream>
using namespace std;
class Teacher{
    public:
    int salary;
    string Subject;
};
class Student{
    public:
    int Roll;
    float cgpa;
};
class TA: public Teacher, public Student{
    public:
    string name;
};
int main() {
     TA ta1;
     ta1.name="Piyush";
     ta1.Subject="Math";
     ta1.cgpa=9.8;
     cout<<ta1.cgpa;
    return 0;
}