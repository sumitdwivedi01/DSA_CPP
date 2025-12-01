#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set <int> D;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            D.insert(i);
                if(n%(n/i)==0){
                    D.insert(n/i);
                }
        }
    }
    for(auto it: D){
        cout<<it<<" ";
    }

    return 0;
}