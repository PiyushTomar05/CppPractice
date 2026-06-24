#include <iostream>
using namespace std;

int main() {
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=9;
    int area=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            int width=j-i;
            int h=min(height[i],height[j]);
            int currarea=width*h;
            area=max(currarea,area);
        }
    }
    cout<<area;
    return 0;
}