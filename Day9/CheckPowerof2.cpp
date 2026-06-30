#include <iostream>
using namespace std;
bool IsPowerof2(int n){
      if((n & (n-1)) == 0){
        return true;
      }else {
        return false; 
      }
}
int main() {
    cout<<IsPowerof2(4)<<endl;
    cout<<IsPowerof2(7);
    return 0;
}