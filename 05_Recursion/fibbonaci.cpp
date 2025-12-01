#include<bits/stdc++.h>
using namespace std;
//MY way
int print_fibo(int n , int f0 , int f1 ,int fn){
    if(n-2<1){
        if(n==0)return f0;
        if(n==1)return f1;
        return fn;
    }
    fn=f0+f1;
    return print_fibo(n-1,f1,fn ,fn);

}

int fibo(int n){
    if(n<=1){
        return n;
    }
    int last = fibo(n-1);//first call
    int slast = fibo(n-2);//second call
    return last+slast;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    
}