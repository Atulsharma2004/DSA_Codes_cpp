#include<iostream>
using namespace std;
int main(){
    int n, counter, sum=0;
    cout<<"Enter n:"<<endl;
    cin>>n;
    for(counter = 1; counter<=n; counter++){
        sum = sum+counter;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}