#include <iostream>
using namespace std;

int MaxProduct(int *arr,int n){
    int prefix=1;
    int suffix=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix=prefix* arr[i];
        suffix=suffix* arr[n-i-1];
        ans=max(ans,max(prefix,suffix));
    }
    return ans;
}

int main() {
    int arr[8]={2,-3,4,-5,6,-7,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<MaxProduct(arr,n);
    return 0;
}