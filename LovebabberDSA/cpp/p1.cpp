#include<iostream>
using namespace std;

int nrep( int arr[], int size){
   for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(arr[i]==arr[j] && j!=i){
            break;
        }
        if(j==size-1){
            cout<<arr[i];
            return 0;
        }
    }
  }
  cout<<"repeted";
  return 0;
}

int main(){
    int arr[]={1,2,2,1,7,4,4,6,6,8,8,8};
    nrep(arr,12);
    return 0;
}