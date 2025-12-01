#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int temp_n =n;
        vector<int> P(n);
        for(auto &it : P){
            cin>>it;
        }
        int count=0;
        int right=0;
        int left=0;
        for(int x=0;x<n-1;x++){
                for(int i=0;i<temp_n;i++){
                    if(P[i]==temp_n){left=i;break;}//1
                }
                for(int j=temp_n-1,i=0;j>=0;j--,i++){
                    if(P[j]==temp_n){right=i;break;}
                }
            int mini = min(left,right);
            count+=mini;
            P.erase(P.begin()+left);
            temp_n--;

        }
        cout<<count<<endl;
    }

    return 0;
}