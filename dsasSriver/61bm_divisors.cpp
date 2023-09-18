#include<bits/stdc++.h>
using namespace std;

//-------------------- Time Complexity = o(n) ----------------------

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

//-------------------- Time Complexity = o(n) ----------------------

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i <= sqrt(n); i++){
// 		if(n % i == 0){
// 			cout << i << " ";
// 			if(i != n/i) cout << n/i << " ";
// 		}
//         cout << "\n";
//     }
// }

int main(){
    int n;
    cin>>n;
    vector<int> ls;
    for(int i = 1; i*i <= n; i++){
		if(n % i == 0){
			ls.push_back(i);
		    if(i != n/i) ls.push_back(n/i);
		}
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout<< it <<" ";
}
