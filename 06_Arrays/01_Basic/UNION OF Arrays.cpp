vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    vector<int>un;
    while(i<n && j<m){//checking till the one ends
        if(a[i]<=b[j]){
            if(un.size()==0||un.back()!=a[i]){
                un.push_back(a[i]);
            }
            i++;
        }
        else{
            if(un.size()==0||un.back()!=b[j]){
                un.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){//if first array is remaining and the another one ends soon
    if(un.back()!=a[i]){
        un.push_back(a[i]);
    }
    i++;
    }
    while(j<m){//if second array is remaining and the another one ends soon
    if(un.back()!=b[j]){
        un.push_back(b[j]);
    }
    j++;
    }
    return un;
}