#include <bits/stdc++.h>
using namespace std;
 void print_stack(stack<int>st ){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
void insert(stack<int> &st,int top){
    if(st.empty()||st.top()<=top){
        st.push(top);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st,top);
    st.push(temp);
    return;
}
void sort_stack(stack<int>&st){
    if(st.size()==1)return;
    int top=st.top();
    st.pop();
    sort_stack(st);
    insert(st,top);
    return;
}
void solve(){

        stack<int>st;
    st.push(42);
    st.push(4);
    st.push(6);
    st.push(11);
    st.push(-2);
    st.push(12);
    print_stack(st);
    sort_stack(st);
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