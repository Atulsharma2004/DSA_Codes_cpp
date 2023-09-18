#include<bits/stdc++.h>
using namespace std;
bool isEven(int a){
    if(a&1)
    return 0;
    else
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<isEven(n);
}