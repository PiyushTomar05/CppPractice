#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,8,5,9,15};
    int max=arr[0];
    int min=arr[0];


    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
            cout<<"Assigning val "<<arr[i]<<" to max"<<endl;
        }
        if(arr[i]<min){
            min=arr[i];
            cout<<"Assigning val "<<arr[i]<<" to min"<<endl;
        }
    }
    cout<<"Largest = " <<max<<endl;
    cout<<"Smallest = " <<min;
    return 0;
}