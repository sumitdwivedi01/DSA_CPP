#include <bits/stdc++.h>
using namespace std;
 

void generate_strings(int n , string a , vector<string>&result ){
    if(a.size()==n){
        result.push_back(a);
        return;
    }
    generate_strings(n,a+"0",result);
    if(a.empty()||a.back()!='1'){
        generate_strings(n,a+"1",result);
    }
    
}
void solve(){

    int n;
    cin>>n;
    vector<string>result;
    string a="";
    generate_strings(n,a,result);
    for(auto &s:result){
        cout<<s<<" ";
    }
    cout<<endl;
    
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}