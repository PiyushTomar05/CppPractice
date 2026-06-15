#include <iostream>
using namespace std;

int linearSearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if (key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[5]={1,8,5,9,15};
    int n=sizeof(arr)/sizeof(int);

    cout<<linearSearch(arr,n,45);
 
    return 0;
}