#include<iostream>
using namespace std;

int main(){
    int am;
    cin>>am;
    int rup;
    cin>>rup;
    switch(rup){
        case 100:{
            int hun=am/100;
            am=am%100;
            cout<<"Notes of hundred : "<<hun<<endl;
        }
        case 50:{
            int fif=am/50;
            am=am%50;
            cout<<"Notes of fifty : "<<fif<<endl;
        }
        case 20:{
            int twe=am/20;
            am=am%20;
            cout<<"Notes of twenty : "<<twe<<endl;
        }
        case 1:{
            int one=am/1;
            am=am%1;
            cout<<"Notes of one : "<<one<<endl;
        }
    }
    return 0;
}