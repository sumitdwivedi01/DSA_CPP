#include <bits/stdc++.h>
using namespace std;
//Functions : void , return , non-parameterized , parameterized
//void function
void printName(string n){
    cout<<"Hey "<<n<<endl;
}
//return function
int SumOfTwo(int a , int b){
    return a+b;
}

//PassByValue : the copy of the ekement goes here which eventually doesn't affect the actual element's value
void doSomething(int n){
    cout<<n<<endl;
    cout<<"doing something...."<<endl;
    n=n+8;
    cout<<n<<endl;
}
//passbyrefference : it takes the address to the function and eventually changes the original number from it's address and perform changes in the original one
void doSomethingR(int &n){
    cout<<n<<endl;
    n=n+8;
    cout<<n<<endl;
}
void arrayChange(int arr[] , int n){
    arr[0]+=28;
    cout<<"The value inside func: "<<arr[0]<<endl;
}
int main(){
    int n=5;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    arrayChange(a , n);
    cout<<"The value inside main: "<<a[0]<<endl;


    return 0;
}