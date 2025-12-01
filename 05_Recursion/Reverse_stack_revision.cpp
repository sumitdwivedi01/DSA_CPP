#include <bits/stdc++.h>
using namespace std;
  void print_stack(stack<int>st ){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
void insert(stack<int> &st,int t){
    if(st.empty()){
        st.push(t);
        return;
    }
    int temp=st.top();
    st.pop();
    insert(st,t);
    st.push(temp);
    
}

void reverse(stack <int> &st ){
    if(st.size()<=1)return;//no need to reverse stack
    int top=st.top();
    st.pop();
    reverse(st);
    insert(st,top);
    return;
}
void solve(){
    stack<int>st;
        st.push(9);
        st.push(12);
        st.push(-3);
        st.push(0);
        st.push(8);
        st.push(5);                                                                                                                                                               
        st.push(3);
        print_stack(st);
        reverse(st);
        print_stack(st);
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}