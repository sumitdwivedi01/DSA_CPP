#include <bits/stdc++.h>
using namespace std;
#define ll long long
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int t=nums1.size();
//         //brute Force
//         int j=0;
//         for(int i=m;i<t;i++){
//             nums1[i]=nums2[j];
//             j++;
//         }
//         sort(nums1.begin(),nums1.end());
//     }   
// };


//optimal one in o(m+n);
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t=nums1.size();
        int i=m-1;
        int j=n-1;
        int k=t-1;
        while(i>=0 && j>=0){ if(nums2[j]>=nums1[i]){
                nums1[k--]=nums2[j--];
            }else{
                nums1[k--]=nums1[i--];
            }
        }
        //if nums2 have remaining elements
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
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