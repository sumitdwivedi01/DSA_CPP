#include <bits/stdc++.h>
using namespace std;
#define ll long long

// class Solution {
//   public:
//     int inversionCount(vector<int> &arr) {
//         // Brute force approach with o(n^2) t.c and o(1) space
//         int n=arr.size();
//         int count=0;
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]>arr[j])count++;
//             }
//         }
//         return count;
//     }
// };

// int cnt=0;// do not use the global variable this is giving errors as well as do not use this in the interviews

int merge(vector<int> & arr , int low , int mid , int high){
    vector<int> v;
    int left=low;
    int right=mid+1;
    int cnt=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            v.push_back(arr[left]);
            left++;
        }
        else{
            cnt+=mid-left+1;
            v.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        v.push_back(arr[left++]);
    }
    while(right<=high){
        v.push_back(arr[right++]);
    }
    for(int i=low;i<=high;i++){
        arr[i]=v[i-low];
    }
    return cnt;
}
int merge_sort(vector<int> & arr , int low , int high){
    int cnt=0;
if(low>=high)return cnt;
int mid = (low+high)/2;
cnt+=merge_sort(arr,low,mid);
cnt+=merge_sort(arr,mid+1,high);
cnt+=merge(arr,low,mid,high);
return cnt;
}


void solve(){

        vector<int> vn={1,2,56,3,1,6,89,9};
        int cnt = merge_sort(vn,0,vn.size()-1);
        cout<<cnt;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}