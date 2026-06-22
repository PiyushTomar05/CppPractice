#include <iostream>
using namespace std;
void fuct1(int mat[][3],int m,int n){
    cout<<"Oth row pointer : "<<mat <<endl;
    cout<<"1th row pointer : "<<mat+1<<endl;
    cout<<"2th row pointer : "<<mat+2<<"\n";
}
void fuct2(int (*mat)[3],int m,int n){
    cout<<"Oth row pointer : "<<mat <<endl;
    cout<<"Oth row value : "<<*(*mat+1) <<endl;
    cout<<"1th row pointer : "<<mat+1<<endl;
    cout<<"2th row pointer : "<<mat+2<<"\n";
}

int main() {
    int mat[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    fuct1(mat,3,3);
    fuct2(mat,3,3);

    return 0;
}