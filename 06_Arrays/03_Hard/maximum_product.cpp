#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;//counting prefix sum
        int m1=INT_MIN;
        int m2=INT_MIN;
        int suffix=1;//counting suffix sum
        for(int i=0;i<n;i++){
            prefix*=nums[i];
            m1=max(m1,prefix);
            if(prefix==0){
                prefix=1;
            }
        }
        //suffix
        for(int i=n-1;i>=0;i--){
            suffix*=nums[i];
            m2=max(m2,suffix);
            if(suffix==0){
                suffix=1;
            }
        }
        return max(m1,m2);
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