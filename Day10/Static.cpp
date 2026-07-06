// #include <iostream>
// using namespace std;
// class Example{
//     public:
//     static int x;
// };
// int Example::x=0;

// int main() {
//     Example eg1;
//     Example eg2;
//     Example eg3;
//     cout<<eg1.x++ <<endl;
//     cout<<eg2.x++ <<endl;
//     cout<<eg3.x++ <<endl;
//     return 0;
// }


//Static Object
#include <iostream>
using namespace std;
class Example{
    public:
    Example(){
        cout<<"Constructor Called";
    }
    ~Example(){
        cout<<"Destructor Called";
    }
};
int main() {
    int a;
    if(a==0){
        static Example eg1;
    }

    cout<<"Code Ending";
    return 0;
}