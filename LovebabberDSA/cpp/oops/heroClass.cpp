#include<iostream>
using namespace std;

class Hero {
    public:
    char name[100];
    int health;
    private:
    char level;

    void print(){
        cout<<"Level : "<<level<<endl;
    }
};
