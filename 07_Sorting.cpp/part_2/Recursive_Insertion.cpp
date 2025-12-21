#include <bits/stdc++.h>
using namespace std;
 
void insertion_sort(int arr[],int i,int n){
    if(i>=n)return;
    int j=i;
    bool flag=false;
    while(j>0){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            flag=true;
        }
        j--;
        if(flag==false)break;
    }
    i++;
    insertion_sort(arr,i,n);
}
void solve(){
int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call the recursive Insertion Sort function
    insertion_sort(arr,2,n);

    cout << "After Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
        
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}