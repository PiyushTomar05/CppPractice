#include <iostream>
using namespace std;

int main() {
    int arr[3][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};
    int m=3,n=4;
    int target=11;
    int srow=0;
    int ecol=n-1;
    bool found=false;
    while(srow<m && ecol>=0){
        if(target==arr[srow][ecol]){
            cout << "(" << srow << ", " << ecol << ")" << endl;
            found=true;
            break;
        }else if(target>arr[srow][ecol]){
            srow++;
        }else{
            ecol--;
        }
    }
cout << (found ? "true" : "false");

    return 0;
}   