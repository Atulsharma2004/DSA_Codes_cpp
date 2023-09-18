//--------------Fill @40 at space in the given sentence-----------------------

#include<bits/stdc++.h>
using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') || ch==' '){
        return 1;
    }
    return 0;
} 

void fillSpace(string s){
    string temp = "";
    for(int i=0; i<s.length(); i++){
        if(valid(s[i])){
            if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(s[i]);
        }
        }
    }
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
}
int main(){
    string s;
    cin>>s;
    fillSpace(s);
    return 0;
}