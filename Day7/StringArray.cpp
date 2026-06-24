#include <iostream>
using namespace std;
void toUpper(char word[],int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
            word[i]=ch-'a'+'A';
        }
    }
}
void toLower(char word[],int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else{
            word[i]=ch-'A'+'a';
        }
    }
}
void reverseArray(char word[],int n){
    int st=0;
    int end=n-1;

    while(st<=end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}
bool palindrome(char word[],int n){
    int st=0;
    int end=n-1;
    int flag=0;
    while(st<=end){
        if(word[st++]!=word[end--]){
            return false;
        }
    }
    return true;
}
int main() {
    char word[]="pIyUsH";
    toUpper(word,6);
    toLower(word,6);

    cout<<word<<endl;
    reverseArray(word,6);
    cout<<word<<endl;
   cout<< palindrome(word,6);
    
    return 0;
}