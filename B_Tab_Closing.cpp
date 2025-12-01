#include <bits/stdc++.h>
using namespace std;
 
int solve(){

        long long a,b,n;
        cin>>a>>b>>n;
        if(b>=a)return 1;
        if((b*n)<=a)return 1;
        else return 2;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        cout<< solve()<<endl;
    }


    return 0;
}