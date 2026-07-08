#include <iostream>
using namespace std;
int tillingProblem(int n){
    if(n==0 || n==1) return 1;
    //vertical
   int ans1= tillingProblem(n-1);
    //Horizontal
   int ans2= tillingProblem(n-2);

   return ans1+ans2;
}
int main() {
    int n=4;
    cout<<tillingProblem(n);
    return 0;
}