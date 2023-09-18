#include<bits/stdc++.h>
using namespace std;


int largestNumber( int arr[], int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (max < arr[i]){
            max = arr[i] ;
        }
    }
    return max;
}


int main(){
    int arr[5];
    for(int i=0 ; i<5 ; i++)
    {
        cin>>arr[i];
    }
    cout<< "Largest number is "<<largestNumber(arr, 5);
    return 0;
    
}