#include<bits/stdc++.h>
using namespace std;


int smallNumber(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[0];  
}


int main(){
    int n=5,a;
    vector<int>arr;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    cout<< "Smallest number is "<<smallNumber(arr);
    return 0;
    
}