#include <iostream>
using namespace std;

int main() {
    int arr[3][3]={{1,2,3},
                {4,5,6},
                {7,8,9}};
    int m=3;
    int n=3;

    int srow=0;
    int scol=0;
    int ecol=n-1;
    int erow=m-1;
    while(srow <= erow && scol <= ecol){
        //top

        for(int i=scol;i<=ecol;i++){
            cout<<arr[srow][i]<<" ";
        }
        for(int j=srow+1;j<=erow;j++){
            cout<<arr[j][ecol]<<" ";
        }
        if(scol<ecol){
            for(int i=ecol-1;i>=scol;i--){
                cout<<arr[erow][i]<<" ";
            }
        }
        if(srow<erow){
            for(int j=erow-1;j>scol;j--){
                cout<<arr[j][scol]<<" ";
            }
        }
        srow++;
        scol++;
        ecol--;
        erow--;
        
            }


    return 0;
}