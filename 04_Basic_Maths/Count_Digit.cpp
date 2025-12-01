// #include<bits/stdc++.h>
// using namespace std;

// int countDigits(long long n){
//     int count=0;
//     if(n==0)return 1;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     return count;
// }



// int main(){
//     int T;
//     cin>>T;
//     for(int i=1;i<=T;i++){
//         long long n;
//         int digit_count;
//         cin>>n;
//         digit_count= countDigits(n);
//         cout<<digit_count<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int count=0;
        cin>>n;
        int loop_n = n;
        vector<int> P(n);
        for (auto &it : P) {
            cin >> it;
        }
        cout<<endl;
        for(int i=0;i<loop_n;i++){
            int size=P.size();
            if(size==0)break;
            int maxi=*max_element(P.begin(),P.end());
            cout<<"size of vector:"<<size<<endl;
            cout<<"max element:"<<maxi<<endl;
            auto it = find(P.begin() , P.end() , maxi);
            int it_index = it-P.begin();
            cout<<"max's index: "<<it_index<<endl;
            // int mid_point = (n+1)/2;
            int mid_point = ceil(float(size-1)/2);
            cout<<"mid point of Current vector: "<<mid_point<<endl;
            if(it_index<mid_point){
                cout<<"Go left"<<endl;
                for(int j=it_index;j>0;j--){
                    count++;
                    cout<<"count++"<<endl;
                }
            }
            if(it_index>=mid_point){
                cout<<"Go right"<<endl;
                for(int j=it_index+1;j<size;j++){
                    count++;
                    cout<<"count++"<<endl;
                }
            }
            P.erase(P.begin()+it_index);
            cout<<"Left elements in vector: ";
            for(auto it : P){
                cout<<it<<" ";
            }
            cout<<endl;
            // n--;
        }
        cout<<count<<endl;
    }

}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int flip_count=0;
//         int count0=0;
//         int count1=0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='0')count0++;
//             else count1++;
//         }
//         while(count1<count0){
//             count1++;
//             count0--;
//             flip_count++;
//         }
//         cout<<flip_count<<endl;
        
//     }

// }
