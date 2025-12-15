// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//     int n=nums.size();
//     k=k%n;
//     if(n==1)return;
//     vector <int> arr;
//     int i=0;
//     int j=n-k;
//     while(j<n){
//         arr.push_back(nums[j]);
//         j++;
//     }
//     while(i<n-k){
//         arr.push_back(nums[i]);
//         i++;
//     }
//     nums=arr;
    
//     }
// }; //using extra space 
#include <bits/stdc++.h>
using namespace std;
 vector<string> splitstring(string s){
        vector<string> temp;
        string u;
        for(int i=0;i<=s.length();i++){
            if(s[i]==' '|| i==s.length()){
                temp.push_back(u);
                u="";
            }
            else{
                u.push_back(s[i]);
            }
        }
        return temp;
    }
    int countVowel(string s){
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
        }
        return count;
    }
 
void solve(){

        string s="cat and mice";
        vector<string> all;
        all=splitstring(s);
        for(auto it: all){
            for(char c: it){
                cout<<c;
            }
            cout<<" ";
        }
        cout<<endl;
        int v = countVowel(all[0]);
        for(int i=1;i<all.size();i++){
            int t=countVowel(all[i]);
            if(t==v){
                reverse(all[i].begin(),all[i].end());
            }
        }
        for(auto it: all){
            for(char c: it){
                cout<<c;
            }
            cout<<" ";
        }
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}