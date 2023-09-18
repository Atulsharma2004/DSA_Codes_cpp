#include<bits/stdc++.h>
using namespace std;


// void SumOfArray(int arr[], int n){
//     int isum=0;
//     cout<<"Sum of Elements of array is : "<<accumulate(arr, arr+n, isum)<<endl;
    
// }

void SumOfArray(vector<int>& arr, int n){
    int isum=0;
    for (int i = 0 ;i < n; i++){
        isum += (double)arr[i];
    }
    cout<<isum<<endl;
    
}


int main(){
    int n=5;
    vector<int>arr = {1, 2, 3, 4, 5};
    SumOfArray(arr, n);
    return 0;
    
}