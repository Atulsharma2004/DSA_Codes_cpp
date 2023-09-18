//A stack is a non-primitive linear data structure.
// The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. 
//As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack.
//That is the reason why stack is also called Last-in-First-out (LIFO).

#include <bits/stdc++.h>
using namespace std;

void explainStack(){
    stack<int> st;
    
    for(int i=1;i<=5;i++){
        st.push(i);
    }

    while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
    cout<<endl;
}

void swapStack(){
    stack<int> st;
    stack<int> st1;
    
    for(int i=1;i<=5;i++){
        st.push(i);
    }

    for(int i=1;i<=9;i=i+2){
        st1.push(i);
    }

    st.swap(st1);

    cout<<"The first stack after swaping : ";
    while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
    cout<<endl;

    cout<<"The second stack after swaping : ";
    while(!st1.empty()) {
		cout << st1.top() << " ";
		st1.pop();
	}
    cout<<endl;
}

int main(){
    explainStack();
    swapStack();
    return 0;
}