#include <iostream>
using namespace std;

int BinarySearch(int *arr,int n,int key){
    int st=0, end = n-1;
    while(st<=n){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if( arr[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}

int main() {

    int arr[8]={2,6,8,9,10,25,45,50};
    int  n=sizeof(arr)/sizeof(int);

    int key=45;
    cout<<BinarySearch(arr,n,key);


    
    return 0;
}