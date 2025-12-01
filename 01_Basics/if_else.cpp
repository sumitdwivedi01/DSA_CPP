#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    //if age>18 adult otherwise not
    int age;
    cin>>age;
    if(age>=18){
        cout<<"Yes you are an adult";
    }
    else if(age>0 && age<18){
        cout<<"Bacchee";
    }
    else{
        cout<<"age can't be negative";
    }
    */
   
    /*
    //Marks grading 
    int marks;
    cin>>marks;
    if(marks<25 && marks>=0){
        cout<<"F";
    }
    else if(marks<35){
        cout<<"E";
    }
    else if(marks<45){
        cout<<"D";
    }
    else if( marks<55){
        cout<<"C";
    }
    else if(marks<65){
        cout<<"B";
    }
    else if(marks<101){
        cout<<"A";
    }
    */
          
    //Age>18 eligible for job 
    int age;
    cin>>age;
    if(age<18 && age>0){
        cout<<"not eligible for job";
    }
    else if(age<57){
        cout<<"eligible for job";
            if(age>=55){
                cout<<" but,retierment soon...";
            }
    }
    else if(age>=57){
        cout<<"Retiered";
    }

    return 0;
}