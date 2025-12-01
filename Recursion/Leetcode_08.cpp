#include <bits/stdc++.h>
using namespace std;


int check_atoi(string &s, int i , long long num , int sign){
    if(i>=s.length()||!isdigit(s[i])){
        return int(num*sign);
    }
    int digit=s[i]-'0';
    num=num*10+digit;
    i++;

    if(num*sign>=INT_MAX)return INT_MAX;
    if(num*sign<=INT_MIN)return INT_MIN;

    return check_atoi(s,i,num,sign);
    

}

int solve(){
    string s;
    getline(cin,s);
    int i=0;
    long long result=0;
    int sign =1;
    if(s.empty())return 0;
    while(i<s.length() && s[i]==' '){
        i++;
    }
    if(s[i]=='-'){
        sign=-1;
        i++;
    }
    else if(s[i]=='+'){
        i++;
    }
    return check_atoi(s,i,result , sign);
    
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        cout<<solve();
    }


    return 0;
}