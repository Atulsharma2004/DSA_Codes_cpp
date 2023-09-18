#include<iostream>
#include "heroClass.cpp"
using namespace std;




int main(){
    // creaion of object
    Hero h1;
    cout<<"Size : "<<sizeof(h1)<<endl;
    cout<<"Nmae : "<<h1.name<<endl; 
    cout<<"Health : "<<h1.health<<endl;
   
    return 0;
}