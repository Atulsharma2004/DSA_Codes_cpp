#include<iostream>
using namespace std;
int main(){
    int a, b;
    int sum, diff, mul, div;
    char op;
    cout<<"Input two numbers"<<endl;
    cin>>a>>b;
    cout<<"Input an operator"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        sum = a+b;
        cout<<"sum="<<sum<<endl;
        break;

    case '-':
        diff = a-b;
        cout<<"diff="<<diff<<endl;
        break;

    case '*':
        sum = a*b;
        cout<<"mul="<<mul<<endl;
        break;

    case '/':
        div = a/b;
        cout<<"div="<<div<<endl;
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }
    return 0;
}