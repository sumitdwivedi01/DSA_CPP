#include <bits/stdc++.h>
using namespace std;
string itob(int n){
        string binary="";
        while(n!=0){
            int r=n%2;    
            binary=to_string(r)+binary;
            n=n/2;
        }
        return binary;
    }
    int btoi(string binary ){
        int result = 0;
        for(int i=0;i<binary.size();i++){
            result=result*2+binary[i]-'0';
        }
        return result;
    }
 
void solve(){

        string binary;
        vector<int> nums = {2,4,6,9,3,1,6,7};
        int n=6;
        binary=itob(n);
        vector<pair<int,int>> pi;
        for(int i=0;i<nums.size();i++){
            pi[i].first=nums[i];
        }
        reverse(binary.begin(),binary.end());

        cout<<n;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}