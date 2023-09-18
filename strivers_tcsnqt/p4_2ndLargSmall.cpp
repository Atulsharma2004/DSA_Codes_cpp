#include<bits/stdc++.h>
using namespace std;


int smallestNumber( int arr[], int n){
    int small, second_small=INT_MAX;
    for(int i=0;i<n;i++){
        if (arr[i]< small){
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small && arr[i] != small){
            second_small=arr[i];
        }
    }
    return second_small;
}
int largestNumber( int arr[], int n){
    int large, second_large= INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>large){
            second_large=large;
            large = arr[i] ;
        }
        else if(arr[i]>second_large && arr[i] != large){
            second_large=arr[i];
        }
    }
    return second_large;
}


int main(){
    int arr[8];
    for(int i=0 ; i<8 ; i++)
    {
        cin>>arr[i];
    }
    cout<< "2nd Smallest number is "<<smallestNumber(arr, 8)<<endl;
    cout<< "2nd Largest number is "<<largestNumber(arr, 8);
    return 0;
    
}