// // //N log N //bruteforce using sorting
// // class Solution {
// // public:
// //     int majorityElement(vector<int>& arr) {
// //         int n=arr.size();
// //         int lim=n/2;
// //         int count=1;
// //         int major=0;
// //         sort(arr.begin(),arr.end());
// //         if(n==1)return arr[0];
// //         for(int i=0;i<n-1;i++){
// //             if(arr[i]==arr[i+1]){
// //                 count++;
// //                 if(count>lim){
// //                     major=arr[i];
// //                     break;
// //                 }
// //                 }
// //                 else{
// //                     count=1;
// //                 }
// //         }
// //         return major;
// //     }
// // };

// //Optimized and using hashmap
// class Solution {
// public:
//     int majorityElement(vector<int>& arr) {
//         int n=arr.size();
//         int major=0;
//         unordered_map<int,int> mpp;
//         for(int i=0;i<n;i++){
//             mpp[arr[i]]++;
//         }
//         for(auto it: mpp){
//             if(it.second>n/2){
//                 major=it.first;
//                 break;
//             }
//         }
//         return major;
//     }
// };

//most optimal approach //Moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        //applying moore's algorithm
        int elem=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                elem=arr[i];
                cnt=1;
                continue;
            }
            if(arr[i]==elem){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        //not here needed but if there is a case that majority element could be exist or could not be then we should confirm the element is majority or not
        int mc=0;
        for(int i=0;i<n;i++){
            if(arr[i]==elem){
                mc++;
            }
        }
        if(mc>n/2)return elem;//checking is the element is acutally majority or not if this will be the majority ok otherwise no element is going to be majority
        return -1;
    }
};
// #include <bits/stdc++.h>
// using namespace std;
 
// void solve(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     if(n==2){
//         cout<<0<<endl;
//         return;
//     }
//     int a=arr[0];
//     int an=arr[n-1];
//     int d=INT_MAX;
//     for(int i=n-1;i>0;i--){
//         d=min(arr[i]-arr[i-1],d);
//     }
//     cout<<"1st d: "<<d<<endl;
//     for(int i=n-1;i>0;i--){
//         int diff=arr[i]-arr[i-1];
//         if(diff%d==0)continue;
//         else{
//             d=min(diff%d,d);
//         }
//     }
//     cout<<"2 d: "<<d<<endl;
//     int tn=((an-a)/d)+1;
//     int ans=tn-n;
//     cout<<ans<<endl;
    
    
    

// }

// int main(){
    
//     int t;

//     cin>>t;


//     while(t--){

//         solve();
//     }


//     return 0;
// }
