#include <iostream>
using namespace std;

int main() {
    int arr[]={4,5,6,2,40,9,10};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    } 
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}