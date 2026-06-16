#include <iostream>
using namespace std;

void MaxSubArraySum1(int *arr,int n){
    int MaxSum=INT_MIN;
    for (int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
            MaxSum=max(MaxSum,currSum);
        }
    }
    cout<<MaxSum<<endl;
}
void MaxSubArraySum2(int *arr,int n){
    int MaxSum=INT_MIN;
    for (int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            MaxSum=max(MaxSum,currSum);
        }
    }
    cout<<MaxSum<<endl;
}

int main() {
    int arr[6]={2,-3,6,-5,4,2};
    int n=6;

    MaxSubArraySum1(arr,n);
    MaxSubArraySum2(arr,n);
    return 0;
}