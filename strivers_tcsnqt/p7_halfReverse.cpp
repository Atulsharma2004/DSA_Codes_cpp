#include<bits/stdc++.h>
using namespace std;


void IncDecArray(vector<int>& arr, int n){
    sort(arr.begin(), arr.end());
    for(int i=0 ; i<n/2 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=n-1 ; i>=n/2 ; i--)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n=8,a;
    vector<int>arr;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    IncDecArray(arr, n);
    return 0;
    
}