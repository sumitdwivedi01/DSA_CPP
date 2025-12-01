//power (x,n) x raised to the power n X^n
#include <bits/stdc++.h>
using namespace std;
 
// double calc_result(double x , int n,double result){
//     if(x==1)return 1;
//     if(n==0){
//         return result;
//     }
//     if(x==0)return 0;
//     if(n<0){
//         result=result/x;
//         return calc_result(x,n+1,result);
//     }               
//     result*=x;
//     return calc_result(x,n-1,result);               
// } givng TLE for the extreme cases because time limit is o(logn)

    double calc_result(double x,int n){
        if(n==0)return 1;
        if(n<0){
            n=abs(n);//abs is absolute value function which returns the absolute value -x->x
           x=1/x; 
        }
        if(n%2==0){
            return calc_result(x*x , n/2);
        }
        else{
            return x*calc_result(x , n-1);
        }
    }
double solve(){
    double x ;
    int n;
    cin>>x>>n;
    return calc_result(x,n);

}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

       cout<< solve();
    }


    return 0;
}