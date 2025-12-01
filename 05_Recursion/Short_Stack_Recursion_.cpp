#include <bits/stdc++.h>
using namespace std;
void print_stack(stack<int>st ){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
void insert(stack<int>&st , int i){//insertion of element
    if(st.empty()||st.top()<=i){//if the element is bigger than the top then you can insert or stack is empty
        st.push(i);
        return ;
    }
    int val=st.top();///if upper condition fail 
    st.pop();//remove the existing top element and store it
    insert(st , i);//now check same condition and push the old value
    st.push(val);//if old value is pushed it means the bigger value is now on the top now just push it back into stack and you are good to go
    return;
}

void sort_stack(stack<int>&st){
    if(st.size()==1)return ;//if stack size is 1 element then the stack is already sorted
    int temp=st.top();//store top
    st.pop();//remove top
    sort_stack(st);//sort remaining stack
    insert(st,temp);//now put the removed element at it's right position recursively using insert function
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