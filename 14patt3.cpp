#include<iostream>
using namespace std;
int main(){
    int row, col, i, j;
    cout<<"Enter the no. of row and column"<<endl;
    cin>>row>>col;
    for(i=1;i<=row;i++){
        for(j=i;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}