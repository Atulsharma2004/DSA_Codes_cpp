// power of two

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=1;
    cin>>n;
    for(int i=0;i<=30;i++){
        if(ans==n){
            cout<<"1";
        }
        else
            cout<<"0";
        
        if(ans<INT_MAX/2){
            ans=ans*2;
        }
            
    }
    return 0;

}