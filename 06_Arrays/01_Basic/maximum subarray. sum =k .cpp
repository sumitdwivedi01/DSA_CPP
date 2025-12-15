//Brute force  TLE---
// class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int k) {
//         // code here
//         int n=arr.size();
//         int sum=0;
//         int ms=0;
//         for(int i=0;i<n;i++){
//             sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=arr[j];
//                 if(sum==k){
//                    ms=max(ms,j-i+1);
//                 }
//             }
//         }
//         return ms;
//     }
// };

//Better
//  class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int k) {
//         // code here
//         int n=arr.size();
//         unordered_map <long long,int> mpp;
//         long long sum=0;
//         int maxlen=0;
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//             if(sum==k){
//                 maxlen=max(maxlen,i+1);
//             }
//             long long rem=sum-k;
//             if(mpp.find(rem)!=mpp.end()){//if the rem is present
//                 int l= i-mpp[rem];
//                 maxlen=max(maxlen,l);
//             }
//             if(mpp.find(sum)==mpp.end()){//if sum is not available then update if it is present just ignore
//                 mpp[sum]=i;            
//             }
//         }
//         return maxlen;
        
//     }
// }; this is the better solution  than previous one that was the O(N^2) and that's the O(N*1)for unordered map andd O(N*Log N) for map ordered

//let's see the optimal one with the help of 2 pointer approach only for the positive ones
 int longestSubarrayWithSumK(vector<int> arr, long long k) {
    // Write your code here
    long long sum=arr[0];
    int n=arr.size();
    int i=0;
    int j=0;
    int maxlen=0;
    while(i<n){
        while(sum>k && j<=i){
            sum-=arr[j];
            j++;
        }
        if(sum==k){
            maxlen=max(maxlen,i-j+1);
        }
        i++;
        if(i<n){
            sum+=arr[i];
        }
    }   
    return maxlen;
}

