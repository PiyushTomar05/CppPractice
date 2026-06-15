#include <iostream>
using namespace std;

//Reversing Array with ExtraSpace

void printArr(int *arr,int n){
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }

}

// int main() {
//     int arr[5]={4,6,2,3,9};
//     int n=sizeof(arr)/sizeof(int);

//     int copyarr[n];
//     for (int i=0;i<n;i++){
//         int j=n-i-1;
//         copyarr[i]=arr[j];
//     }

//     for(int i=0;i<n;i++){
//         arr[i]=copyarr[i];
//     }
//     printArr(arr,n);
//     return 0;
// }

// Reversing  Array Without ExtraSpace (2 Pointer Approarch)

int main(){
    int arr[5]={4,6,2,3,9};
    int n=sizeof(arr)/sizeof(int);

    int start=0,end=n-1;
    while(start<end){
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp; 
             //   or
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    printArr(arr,n);
    return 0;
}
