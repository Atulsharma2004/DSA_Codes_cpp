//map in STL are associative containers where each element consists of a key value and a mapped value. 
//Two mapped values cannot have the same key value.

#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    map<int,int>mp;
    mp[1]=2;
    mp.emplace(3,1);
    mp.insert({2,4});
    mp.insert({4,7});

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mp[2]<<endl;
    cout<<mp[5]<<endl;

    
}

void findmap(){
    map<int,int>mp;
    mp[1]=2;
    mp.emplace(3,1);
    mp.insert({2,4});
    mp.insert({4,7});

    // auto it=mp.find(3);
    // cout<<*(it);
}

int main(){
    explainMap();
    findmap();
    return 0;
}