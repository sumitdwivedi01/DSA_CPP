#include<bits/stdc++.h>
using namespace std;

int find_GCD(int a , int b){
    int n;
    n=min(a,b);
    if(b%a==0 || a%b==0)return n;
    for(int i=n/2;i>=2;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}

int main(){
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;
    int ans =find_GCD(n1,n2);
    cout<<ans<<endl;
    return 0;
}