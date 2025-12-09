#include <bits/stdc++.h>
using namespace std;
 
bool is_exist(string &s , vector<string>& w , string c){
     if(c.size()>=s.size())      
            return (c==s);
        
        for(int i=0;i<w.size();i++){
            c+=w[i];
            if(is_exist(s,w,c))return 1;
            c.resize(c.size()-w[i].size());
        }
        return 0;
}

void solve(){
    vector<string> w={"cat","dog","and"};
    string s="andcatdog";
    string c="";
    cout<<is_exist(s,w,c);
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}