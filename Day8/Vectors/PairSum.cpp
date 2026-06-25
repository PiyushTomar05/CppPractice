#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> vec={2,7,9,11};
    int target = 11;
    int st=0;
    int end=vec.size()-1;
    vector <int> ans;

    int sum=0;
    while(st<end){
        int sum=vec[st]+vec[end];
        if(sum==target){
            ans.push_back(st);
            ans.push_back(end);
            break;

        }
        else if(sum<target){
            st++;
        }else{
            end--; 
        }
    }
    if(ans.size() == 2)
        cout <<"[" << ans[0] << "," << ans[1]<<"]";
    else
        cout << "No Pair Found";

    return 0 ;
}