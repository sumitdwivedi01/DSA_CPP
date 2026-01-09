#include <bits/stdc++.h>
using namespace std;
#define ll long long

//leetcode problem 151
//solution o(n) time and o(n) size
// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string> res;
//         string ans="";
//         stringstream ss(s);
//         string word;
//         while(ss>>word){
//             res.push_back(word);
//         }
//         int n=res.size();
//         for(int i=n-1;i>=0;i--){
//             ans+=res[i]+' ';
//         }
//         ans.pop_back();
//         return ans;
//     }
// };

//o(1) space
//two pointers approach
class Solution {
public:
    string reverseWords(string s) {
        //two pointers approach and o(1) space complexity
        reverse(s.begin(),s.end());
        int i=0;
        int l=0;
        int r=0;
        int n=s.length();
        while(i<n){
            while(s[i]==' '&& i<n)i++;//skipped all leading zeros
                if(i==n)break;
                
                while(i<n && s[i]!=' '){//run till the current word is going
                    s[r]=s[i];
                    r++;
                    i++;
                }
                reverse(s.begin()+l,s.begin()+r);
                s[r++]=' ';//this is for spaces to maintain
                l=r;//after giving space moving forward to get next word
                i++;//going ahead and skipping spaces with i and getting next word
            
        }
            s.resize(r-1);
            return s;
    }
};
void solve(){

        





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}