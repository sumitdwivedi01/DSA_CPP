// #include <bits/stdc++.h>
// using namespace std;

// void get_sum_sub(int i , int sum , int key , vector<int> &curr,vector<int> &nums , vector<vector<int>> &result){
//     if(key==sum){
//         result.push_back(curr);
//         return;
//     }
//     if(i<nums.size()){
//         int temp=nums[i];
//         key+=temp;
//         curr.push_back(nums[i]);
//         get_sum_sub(i+1,sum,key,curr,nums,result);
//         key-=temp;
//         curr.pop_back();
//         get_sum_sub(i+1,sum,key,curr,nums,result);
//     }
    
// }
// void solve(){
//     int n;
//     cin>>n;
//     vector<int> nums(n);
//     for(int i=0;i<n;i++){
//          cin>>nums[i];
        
//     }
//         int sum;
//      cin>>sum;

//      vector<vector<int>> result;
//      vector<int>current;
//      int index =0;
//      int key=0;
//      get_sum_sub(index,sum,key,current,nums,result);
//      for(auto it:result){
//             cout<<"[ ";
//             for(auto i: it){
//                 cout<<i<<" ";
//             }
//             cout<<"]";
//     }
// }

// int main(){
    
//     int t =1;

//     // cin>>t;


//     while(t--){

//         solve();
//     }


//     return 0;
// }


//Modified print only any one subsequence 
// #include <bits/stdc++.h>
// using namespace std;
// //step :1 make the function bool to stop further recursive calls after finding one solution
// bool get_sum_sub(int i , int sum , int key , vector<int> &curr,vector<int> &nums , vector<vector<int>> &result){
//     if(i>=nums.size()){

//         if(key==sum){
//             result.push_back(curr);
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//         int temp=nums[i];
//         key+=temp;
//         curr.push_back(nums[i]);
//         if(get_sum_sub(i+1,sum,key,curr,nums,result)){
//             return true;
//         };
//         key-=temp;
//         curr.pop_back();
//         if(get_sum_sub(i+1,sum,key,curr,nums,result)){
//             return true;
//         };

//         return false;
    
    
// }
// void solve(){
//     int n;
//     cin>>n;
//     vector<int> nums(n);
//     for(int i=0;i<n;i++){
//          cin>>nums[i];
        
//     }
//         int sum;
//      cin>>sum;

//      vector<vector<int>> result;
//      vector<int>current;
//      int index =0;
//      int key=0;
//      bool res=get_sum_sub(index,sum,key,current,nums,result);
//      for(auto it:result){
//             cout<<"[ ";
//             for(auto i: it){
//                 cout<<i<<" ";
//             }
//             cout<<"]";
//     }
// }

// int main(){
    
//     int t =1;

//     // cin>>t;


//     while(t--){

//         solve();
//     }


//     return 0;
// }

// count the subsequences with the sum
#include <bits/stdc++.h>
using namespace std;
//step :1 make the function bool to stop further recursive calls after finding one solution
int get_sum_sub(int i , int sum , int key ,vector<int> &nums ){
    if(i>=nums.size()){
        if((key==sum)){
            return 1;
        }else{
            return 0;
        }
    }
        int temp=nums[i];   
        key+=temp;
        int l = get_sum_sub(i+1,sum,key,nums);
        key-=temp;
        int r = get_sum_sub(i+1,sum,key,nums);
        return l+r;
    
}
void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
         cin>>nums[i];
        
    }
        int sum;
     cin>>sum;
     int index =0;
     int key=0;
     int count =get_sum_sub(index,sum,key,nums);
     cout<<"The number of all the subsequences is : "<<count<<endl;
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}