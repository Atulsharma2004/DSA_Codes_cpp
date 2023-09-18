#include<bits/stdc++.h>
using namespace std;


int smallNumber( int arr[], int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if (min > arr[i]){
            min = arr[i] ;
        }
    }
    return min;
}


int main(){
    int arr[5];
    for(int i=0 ; i<5 ; i++)
    {
        cin>>arr[i];
    }
    cout<< "Smallest number is "<<smallNumber(arr, 5);
    return 0;
    
}