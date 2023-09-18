#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>=0){
        cout<<n<<endl;
        cout<<"Enter again";
        cin>>n;
    }
    return 0;
}