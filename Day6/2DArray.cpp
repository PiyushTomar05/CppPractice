#include <iostream>
using namespace std;

int main() {
    // int arr[5][2]={ {10,20},
    //                 {30,40},
    //                 {50,60},
    //                 {70,80},
    //                 {90,100}
    //             };
    //  cout<<arr[0][0];
    int n;
    cout<<"Enter Rows or n : ";
    cin>>n;
    int m;
    cout<<"Enter colunms or m : ";
    cin>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}