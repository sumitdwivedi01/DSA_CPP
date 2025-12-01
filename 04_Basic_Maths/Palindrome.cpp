#include<bits/stdc++.h>
using namespace std;

int Reverse_Number(int n){
    long long rev=0;
    int digit=0;
     while (n!=0)
     {
        digit = n%10;
        rev=rev*10+digit;
        n=n/10;
     }
     if(rev>INT_MAX || rev<INT_MIN)return 0;
     return rev;
}

bool isPalindrome(int n){
    if(n<0)return false;
    int rev = Reverse_Number(n);
    if(n== rev)return true;
    return false;
}

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int n;
        cin>>n;
        cout<<isPalindrome(n)<<endl;
    }
    return 0;
}