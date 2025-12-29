#include <bits/stdc++.h>
using namespace std;
 //bruteforce
//  class Solution {
//   public:
//     long subarrayXor(vector<int> &arr, int k) {
//         // code here
//         //brute force of taking each element xor with each other and then counting it o(n^2)
//         long count=0;
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//             int x=0;
//             for(int j=i;j<n;j++){
//                 x=(x^arr[j]);
//                 if(x==k){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

// optimal one
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<long , long> mpp;
        int n=arr.size();
        mpp[0]=1;
        long count=0;
        int x=0;
        for(int i=0;i<n;i++){
            x^=arr[i];
            int target=x^k;
            if(mpp.find(target)!=mpp.end()){
                count+=mpp[target];
            }
            mpp[x]++;
            
        }
        return count;
        
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