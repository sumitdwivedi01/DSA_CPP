#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    //Number Hashing

    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // vector<int> f(12,0);
    // for(int i=0;i<n;i++){
    //     int j=arr[i];
    //     f[j]++;
    // }
    // cout<<"occurance of 2 is: "<<f[2]<<endl;
    // cout<<"occurance of 3 is: "<<f[3]<<endl;
    // cout<<"occurance of 5 is: "<<f[5]<<endl;
    // cout<<"occurance of 1 is: "<<f[1]<<endl;
    
    //Character Hashing
    // string s;
    // cin>>s;
    // // vector<int> hashh('z'-'a'+1,0); only for small case chars
    // vector<int> hashh (256,0);//for all the chars no need to specify
    // for(auto ch : s){
    //     hashh[ch]++;
    // }
    // int n;
    // cin>>n;
    // while(n--){
    //     char c;
    //     cin>>c;
    //     cout<<"occurance of "<<c<<" is: "<<hashh[c]<<endl;
    // }

    //for higher amount for values more than 10^7 cause the maximum size of array we can define is 10^7
    // we use unordered_map<int,int> key , value in unordered map the complexity for all instructions is just O(1) only for some worst case it goes to O(N)
    //also in ump can have same value for different keys 
    unordered_map <int,int> mpp;// mpp[key] = value ; key the number and value will be it's occurance in the array

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++; //pre-computing while taking the input
    }
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }

    //the map stores everything in sorted manner but not the unordered one do's so 
    // if you want to iterate in map do this
    // for 

    int q;
    cin>>q;
    while(q--){
        int val;
        cin>>val;
        cout<<"The occurance of "<<val<<" is :"<<mpp[val];
        cout<<endl;
    }



}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}