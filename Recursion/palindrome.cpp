#include<bits/stdc++.h>
using namespace std;

bool Check_Pali(string s, int l , int r){
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return Check_Pali(s,l+1,r-1);
}

int main(){
    string s;
    getline(cin,s);
    string a;
    for(auto ch: s){
        if(isalnum(ch)){
            a+=tolower(ch);
        }
    }
    int l=0;
    int r=a.length()-1;
    return Check_Pali(a,l , r);
}