#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    string s="hello";
    string c(s,0,4);//copy string as much as you want
    // string c=s; //copy whole string
    // cout<<c<<endl;
    sort(c.begin(),c.end());

    string str="  this is amazing  to knowww i guess   ";
    stringstream ss(str);
    string word;
    vector<string> ans;
    string res="";
    while(ss>>word){
        ans.push_back(word);
    }
    int n=ans.size();
    // cout<<n;
 





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}