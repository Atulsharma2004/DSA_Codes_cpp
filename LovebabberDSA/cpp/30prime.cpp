#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    
    for(int i=2;i<=n;i++){
        int fact=0;
        for(int j=1;j<=n;j++){
            if(i%j==0){
                fact++;
            }
        }
        if(fact==2)
            cout<<i<<" ";
    }
    
    return 0;
}