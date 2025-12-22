#include <bits/stdc++.h>
using namespace std;
 
int part(vector<int> &arr ,int low , int high){
    //  cout << " low: " << low << " HIGHT "  << high << endl;

    int pivote=arr[low];
    int i=low+1,j=high;
    while(i<=j){
        while( i<=high && arr[i]>pivote ){
            i++;
        }
        while(j>low && arr[j]<=pivote  ){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    // cout << " j = " << j << endl;
    return j;
}
void quickSort(vector<int> & arr, int low , int high){//for accending order
    if(low<high){
    //   cout << " low: " << low << " HIGHT "  << high << endl;
        int partition=part(arr,low,high);
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
    }
}
void solve(){
     vector<int> arr = {10, 7, 7, 8, 9, 1, 5};
    int maxii = *max_element(arr.begin()+0,arr.end());
    cout<<maxii<<endl;
    for (int num : arr)
        cout << num << " ";

        cout<<endl;

    // Apply quicksort
    quickSort(arr, 0, arr.size() - 1);

    // Print sorted array
    for (int num : arr)
        cout << num << " ";
    

}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}