//--------------Array-----------------------
// return reverse of every word in a sentence after every space.

#include<bits/stdc++.h>
using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A' +'a';
        return temp;
    }
}

bool isPalindrome(string a){
    int s=0, e=a.length()-1;
    while(s<=e){
        if((a[s]) !=(a[e])){
            cout<<"No";
        }else{
            s++;
            e--;
        }
    }
    cout<<a;
}

bool validPalindrome(string s){
    string temp = "";
    for(int j=0; j<s.length(); j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }

    for(int j=0; j<s.length(); j++){
        temp[j] = toLower(temp[j]);
    }
    for(int j=0; j<s.length(); j++){
        if(s[j]=='\0'){
            return isPalindrome(temp);
        }
    }
    
}
int main(){
    cout<<"Enter charater.."<<endl;
    string s;
    cin>>s;
    validPalindrome(s);
    return 0;  
}