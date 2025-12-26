#include <bits/stdc++.h>
using namespace std;
 
class s {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        unordered_set <int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int s=1;
        int ls=1;
        for(int x: st){
            s=1;
            if(st.find(x-1)==st.end()){
                while(st.find(x+1)!=st.end()){
                    x++;
                    s++;
                }
                ls=max(s,ls);
            }
        }
        return ls;
    }
};
void solve(){
    vector <int> arr ={10 ,7 ,7 ,8 ,9 ,1 ,5 };
s ss;
cout<< ss.longestConsecutive(arr)<<endl;

}

int main(){
    
    int t =1;

  //  cin>>t;


    while(t--){

        solve();
    }


    return 0;
}