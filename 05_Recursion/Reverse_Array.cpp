#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[] ,int l, int r){//#approach 1 using 2 pointers approach
    if(l>=r)return;
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}


void reverse_Array(int arr[] , int n ,int i){//second approach using not extra parameters
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_Array(arr , n ,i+1);
}

int main(){
    int arr[]={2,6,8,6,88,93,2,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_array(arr ,n);
    reverse(arr,0,n-1);
    print_array(arr ,n);
    reverse_Array(arr , n ,0);
    print_array(arr ,n);
    return 0;
}