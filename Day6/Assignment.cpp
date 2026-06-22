// Question 1 : Print the number of all 7’s that are in the 2d array.
// Example :
// Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
// Output - 2
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[][3] = { {4,7,8}, {8,8,7} };
//     int target=8;
//     int n=2;
//     int m=3;

//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==target){
//                 count++;
//             }
//         }
//     }
//     cout<<count; 
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------------------------------------

// Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
// Example :
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
// Output - 18

// #include <iostream>
// using namespace std;

// int main() {
//     int nums[][3] = { {1,4,9}, {11,4,3}, {2,2,3} };
//     int m=3;

//     int sum=0;
//         for(int j=0;j<m;j++){
//             sum+=nums[1][j];
//         }
//     cout<<sum;
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------------

// Question 3 : Write a program to Find Transpose of a Matrix.

#include <iostream>
using namespace std;


int main() {
    int arr[][3] = { {1,2,3}, {4,5,6} };
    int  n = 2, m = 3;

    int trans[m][n];

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
            trans[j][i]=arr[i][j];
            
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<< trans[i][j]<<" ";
            
        }
        cout<<endl;
    }

    
    return 0;
}