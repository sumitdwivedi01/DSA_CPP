#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0 ; i<n ;i++){
        for(int j=0; j<n ;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*(n-i)+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
        //top
    for(int i=0;i<n;i++){
        //spaces
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

        //bottom {symmetry}
    for(int i=1;i<=n;i++){
    //spaces
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*(n-i)+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<i;j++){
            cout<<" ";
        }
    cout<<endl;
    }
    
}
void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        //top
        if(i<=n){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
        for(int j=0;j<=(2*n-1-i);j++){
                cout<<"*";
        }
            cout<<endl;
        }
    }
    
}
void pattern11(int n){
    // for(int i=1;i<=n;i++){
    //     for(int j=1 ;j<=i;j++){
    //         if(i%2==0||i==0){
    //             if(j%2==0||j==0){
    //                 cout<<"1";
    //             }
    //             else{
    //                 cout<<"0";
    //             }
    //         }
    //         else{
    //             if(j%2==0||j==0){
    //                 cout<<"0";
    //             }
    //             else{
    //                 cout<<"1";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++){
        int start = 1;
        (i%2==0)?start=0:start=1;
            for(int j=1;j<=i;j++){
                cout<<start;
                start=1-start;
            }
            cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //gap
        for(int j=1;j<=(2*n-2*i);j++){
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=1;i<=n;i++){
        int x=65;
        char a = char(x);
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            x++;
            a = char(x);
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=1;i<=n;i++){
        int x=65;
        char a = char(x);
        for(int j=1;j<=n-i+1;j++){
            cout<<a<<" ";
            x++;
            a = char(x);
        }
        cout<<endl;
    }
}
void pattern16(int n){
    int x=65;
    for(int i=1;i<=n;i++){
        char a = char(x);
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
        }
        x++;
        a = char(x);
        cout<<endl;
    }
}
void pattern17(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        //space
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1 ;j<=i;j++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int j=1 ; j<i;j++){
            ch--;
            cout<<ch;
        }
        //space
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    char ch = 'A';
    for(int i=1;i<=n;i++){
        ch=('A'+n-i);
        for(int j=1 ; j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
void pattern19(int n){
    //upper
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        //stars
         for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }    
    //lower
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*(n-(i+1));j++){
            cout<<" ";
        }
        //stars
         for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }    
}
void pattern20(int n){
    for(int i=1;i<=2*n-1;i++){
        //stars
        if(i<=n){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //gap
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
        else{
            //stars
        for(int j=1;j<=2*n-i;j++){
            cout<<"*";
        }
            //gap
        for(int j=1;j<=2*(i-n);j++){
            cout<<" ";
        }
            //stars
        for(int j=1;j<=2*n-i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
    }
}
void pattern21(int n){
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=1;j<=n;j++){
                if(j==1||j==n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
void pattern22(int n){
    int temp=n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern22(n);
    

    return 0;
}