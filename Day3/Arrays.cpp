#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    int k =sizeof(arr)/sizeof(int);
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }

    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}