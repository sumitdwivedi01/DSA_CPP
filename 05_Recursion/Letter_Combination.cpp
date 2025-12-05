#include <bits/stdc++.h>
using namespace std;

void get_comb(string digits, string combs[] ,int i , string crr , vector<string> &result){
    if(i==digits.length()){
        result.push_back(crr);
        return;
    }
    int digit = digits[i] - '0';
    for(int x=0;x<combs[digit].length();x++){
        get_comb(digits,combs,i+1,crr+combs[digit][x],result);

    }
}
 
void solve(){
    string combos[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string digits="23";
    vector<string> result;
    string current;
    get_comb(digits,combos,0,current,result);
    for(auto s:result){
        cout<<s<<" ";
    }       
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}