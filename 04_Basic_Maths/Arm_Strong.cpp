#include<bits/stdc++.h>
using namespace std;

int isArmStrong(int n){
        // code here
        int cube_sum =0;
        int temp =n;
        for(int i=1;i<=3;i++){
            cube_sum += pow(n%10,3);
            n=n/10;
        }
        if(cube_sum==temp)return true;
        return false;
    
}

int main(){
    int n;
    cin>>n;
    int ans=isArmStrong(n);
    cout<<"ans:"<<ans<<endl;
    return 0;
}