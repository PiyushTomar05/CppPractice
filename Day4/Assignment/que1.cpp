// Question 1 : Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct. [link]
// Examples :
// Input: nums = [1,2,3,4] Output: false
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true


#include <iostream>
using namespace std;

bool isRepeat(int *nums,int n){
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
}


int main() {
    int nums[]={1,1,1,3,3,4,3,2,4,2};
    int n=10;

   cout<< isRepeat(nums,n);
    
    return 0;
}