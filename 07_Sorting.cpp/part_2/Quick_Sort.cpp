#include <bits/stdc++.h>
using namespace std;
 
int part(vector<int> &arr ,int low , int high){
    int pivote=arr[low];//taking 1st index as pivote
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivote && i<=high){//choosing the element which is the 1st greater than the pivote to send it to the right of the pivote element
            i++;
        }

        while(arr[j]>pivote && j>=low){//checking for element less than pivote from the last  & taking it if element is greater than pivote leaving it
            j--;
        }
        if(i<j){//but swapping if the i < j because if cross each other then it's not the case cause already in the right place
            swap(arr[i],arr[j]);//swapping and sending larger to right and smaller to left
        }
        //now placing the pivote element in the right place because pivote is in the first place so placing it to the current index j to it's original location in the sorted array 
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(vector<int> & arr, int low , int high){//for accending order
    if(low<high){
        int partition=part(arr,low,high);
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
    }
}
void solve(){
     vector<int> arr = {10, 7, 8, 9, 1, 5};

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

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}