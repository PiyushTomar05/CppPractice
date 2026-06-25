#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vec={1,2,3,4};
    // vector <int> vec1(10,-1);
    // int n=vec1.size();
    // for(int i=0;i<n;i++){
    //     cout<<vec1[i]<<" ";
    // }
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;
    
    vec.push_back(5);
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;
    
    return 0;
}