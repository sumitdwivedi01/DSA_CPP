#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> vn(n+1,0);
        vector<int> ans;
        for(int i=0;i<n;i++){
            vn[arr[i]]++;
        }
        int msng=-1;
        int rep=-1;
        for(int i=1;i<n+1;i++){
            if(vn[i]==0){
                msng=i;
            }
            if(vn[i]==2){
                rep=i;
            }
        }
        ans.push_back(rep);
        ans.push_back(msng);
        return ans;
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