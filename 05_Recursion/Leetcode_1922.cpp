#include <bits/stdc++.h>
using namespace std;
const int Mod = 1e9+7;
int getWays(int base , long long power , int result){
    if(power==0)return result;
    if(power%2==0){
        base=(base*base)%Mod;
        power/=2;
    }
        result*=base%Mod;
        return getWays(base , power-1,result);

    
}

int check_goods(long long n ){
    long long even=n+1/2;
    long long odd = n/2;
    
    long long evenways=getWays(5,even,1);
    long long oddways=getWays(5,odd,1);
    
    return(evenways*oddways)%Mod;

}
int solve(){
    long long n;
    cin>>n;
    return check_goods(n);

}


int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        cout<<solve();
    }


    return 0;
}