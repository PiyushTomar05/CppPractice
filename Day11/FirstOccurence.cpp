#include <iostream>
#include<vector>
using namespace std;
int FO(vector<int> arr,int i,int target){
    if(i==arr.size()) return -1;
    if(arr[i]==target) return i;

    return FO( arr,i+1,target);
}
int LO(vector<int> arr,int i,int target){
    if(i==arr.size()) return -1;
    int idx=LO( arr, i+1, target);
    if(idx==-1){
        if(arr[i]==target) return i;
    }
    return idx;
}
int main() {
    vector <int> arr={1,2,5,3,4,4,2,4,5};
   cout<< FO(arr,0,5)<<endl;
   cout<< LO(arr,0,5);
    return 0;
}