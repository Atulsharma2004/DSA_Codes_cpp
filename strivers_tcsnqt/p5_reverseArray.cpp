#include<bits/stdc++.h>
using namespace std;

int printArray(int arr[], int n){
   cout<<" Reverse of array is :"<<endl;
   for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
   }
}
int reverseArray( int arr[], int s, int e){
    if(s<e){
        swap(arr[s], arr[e]);
        reverseArray(arr, s+1,e-1 );
    }
}


int main(){
    int n=5;
    int arr[5];
    for(int i=0 ; i<5 ; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr, 0, n-1);
    printArray(arr, 5);
    return 0;
    
}