#include <iostream>
using namespace std;

int main() {
    int arr[]={1,7,3,6,5,6};
    int n=6;
    int sum=0;
    int left=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
      int right=sum-left-arr[i];
       if(left==right){
        cout<<i;
        return 0;
       }
       left+=arr[i];
    }
    cout<<"No Index";

    return 0;
}