#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char level;

    void print(){
        cout<<"Level1 : "<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){  
        health=h;
    }
};



int main(){
    // creaion of object
    Hero h1;
    // h1.health=90;
    h1.setHealth(90); 
    h1.level='A';
    cout<<"Size : "<<sizeof(h1)<<endl; 
    cout<<"Health : "<<h1.getHealth()<<endl;
    cout<<"Level : "<<h1.level<<endl;
    return 0;
}