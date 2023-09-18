#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int len=to_string(n).length();
    int temp=n;
    int sum=0,r;
    while(n>0){
        r=n%10;
        sum=sum+pow(r,len);
        n=n/10;
    }
    if(sum==temp) cout<<"true";
    else cout<<"false";
}

// int main(){
//     int n;
//     cin>>n;
//     int originalno = n;
//     int count = 0;
//     int temp = n;
//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }
//     int sumofpower = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         sumofpower += pow(digit,count);
//         n /= 10;
//     }
//     cout<<sumofpower;
//     return 0;
// }