#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(string s , int start , int end){
    while(start<end){
        if(s[start]!=s[end])return 0;
        start++;
        end--;
    }
    return 1;
}
void get_pali(string &s,int i , vector<string>& crr,vector<vector<string>>& result){
    if(i==s.size()){
        result.push_back(crr);
        return;
    }
    for(int j=i+1;j<=s.length();++j){
        if(isPalindrome(s,i,j-1)){
            crr.push_back(s.substr(i,j-i));
            get_pali(s,j,crr,result);
            crr.pop_back();
        }
    }
}
vector<vector<string>> partition(string s){
    vector<string> current;
    vector<vector<string>> result;
    get_pali(s,0,current,result);
    return result;
}
void solve(){
    string s="abb";
    vector<vector<string>>result;
    result=partition(s);
    for (auto &vec : result) {
        for (auto &str : vec)
            cout << str << " ";
        cout << endl;
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