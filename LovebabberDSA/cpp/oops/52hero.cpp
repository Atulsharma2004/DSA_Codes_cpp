#include<iostream>
using namespace std;

class Hero {
    public:
    int health;
    char level;

    void print(){
        cout<<"Level1 : "<<level<<endl;
    }
};



int main(){
    // creaion of object
    Hero h1;
    h1.health=90;
    h1.level='A';
    cout<<"Size : "<<sizeof(h1)<<endl; 
    cout<<"Health : "<<h1.health<<endl;
   cout<<"Level : "<<h1.level<<endl;
    return 0;
}