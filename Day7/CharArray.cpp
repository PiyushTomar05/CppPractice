#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // char arr[5]={'a','b','c','d','e'};
    // cout<<arr[0]<<endl;

    // char string[5]={'c','o','d','e','\0'};
    // cout<<string<<endl;

    // char work[]="code";
    // cout<<work;

    char word[5];
    cin>>word;
    cout<<word;


    char sentence[50];
    cin.getline(sentence,50);
    cout<<sentence<<endl;
    cout<<strlen(sentence);
    return 0;
}