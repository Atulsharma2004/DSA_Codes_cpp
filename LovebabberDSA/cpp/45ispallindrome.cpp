//--------------Array-----------------------

#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp= ch-'A' +'a';
        return temp;
    }
}
bool isPalindrome(char a[], int n){
    int s=0, e=n-1;
    while(s<=e){
        if( toLower(a[s]) != toLower(a[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    cout<<"Enter charater.."<<endl;
    char ch[n];
    cin>>ch;
    bool pl = isPalindrome(ch, n);
    if(pl==0)
    cout<<"Not a Palindrome..........";
    else
    cout<<"Palindrome.....";
}