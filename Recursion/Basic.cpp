#include<bits/stdc++.h>
using namespace std;
void printNumsInc(int n){
    if(n<=0)return;
    printNumsInc(n-1);
    cout<<n<<endl;
}

void printNumsDec(int n){
    if(n<=0)return;
    cout<<n<<endl;
    printNumsInc(n-1);
}

void printName(int n){
    if(n<=0)return;
    cout<<"Sumit" <<" Dwivedi"<<endl;
    printName(n-1);
}

void backtracking(int i){
    if(i<1)return;
    backtracking(i-1);
    cout<<i<<endl;
}

void sumOfN(int result ,int n){//with parameters
    
    if(n<1){
        cout<<result;    
        return;
    }
    sumOfN(result+n,n-1);
    
}

int sumTillnNoP(int n){//without parameters
    if(n==0)return 0;
    return n+sumTillnNoP(n-1);
}

void fact(int result , int n){//with parameters
    if(n==0){
        cout<<result;
        return;
    }
    result*=n;
    fact(result ,n-1);
}

long long fact (int n){//without parameters
    if(n==0)return 1;
    return n*(fact(n-1));
}


int main(){
    int n;
    cin>>n;
    int result =1;
    // printName(n); //print name 1 to time
    // printNumsInc(n); //print countings 1 to N
    // printNumsDec(n); //print countings 1 to NB
    // sumOfN(result ,n);//using parameter
    // backtracking(n);
    // cout<<sumTillnNoP(n)<<endl;
    // fact(result ,n);
    cout<<fact(n)<<endl;
    return 0;
}