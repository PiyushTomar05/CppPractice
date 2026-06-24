#include <iostream>
using namespace std;
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
}
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
        
    }
}

int main() {
    int arr[]={4,5,6,2,40,9,10};
    int n=sizeof(arr)/sizeof(int);
    // bubbleSort(arr,n);
    // selectionSort(arr,n);
    insertionSort(arr,n);
    printarr(arr,n);
    return 0;
}