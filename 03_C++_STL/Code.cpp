#include<bits/stdc++.h>
using namespace std;

void explainPairs(){
    pair <int,float> p ={2,3.33};
    cout<<p.first <<" "<<p.second<<endl;
    pair< int , pair<char , double>> p2 = {3 ,{ 'a' , 5.7563 }};//nested pairing to store more elements
    cout<<p2.first <<" "<<p2.second.second<<endl;
    pair <int , int> PairArr[] = {{2,5},{3,9},{8,77},{11,56}};
    cout<<PairArr[3].first<<endl;
}

void explainVectors(){
    vector<int> v ; //it's empty for now
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int , int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(1,2); //it doesn't require a special {} curly braces just smart enough to auto understand it

    vector <int>::iterator it = v.begin();
    it++; // shiftes the iterator to the memory location of the next element
    cout<<*(it)<<endl;//this * gives it the value to the memory location you are
    cout<<*(it)<<endl;//this * gives it the value to the memory location you are
    
    v.push_back(8);
    v.push_back(7);

    v.push_back(90);
    v.push_back(67);
    
    cout<<v.back()<<endl; 
    // for(vector<int>::iterator it = v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // } //shorter method using auto it automatically understands what is the type of data structure
    it = v.begin();
    // it+=5;
    advance(it , 5);
    cout<<"printing advance it"<<endl;
    cout<<*(it)<<endl;

    // 25 continue
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
    //v-> 1 2 8 7 90 67 
    //Deletion in vector using erase() it gets the address of the element
    v.erase(v.begin()+1); //this removes the 2nd element (2)
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    // v-> 1 8 7 90 67
    cout<<"Deleting 8-90 using erase \n";
    v.erase(v.begin()+1 ,v.begin()+4);
    for(auto it:v){
        cout<<it<<' ';
    }
    cout<<endl;
    // v->1,67
    cout<<"insertion\n";
    //Insert Function this inserts before the memory adress given begin points at first and that's why the insertion happens before first element end target after the last element that's why insertion happens at last so if you want to insert at 1st position just give the address of previous first it means this will then insert at 1st and that old one become second one

    v.insert(v.begin(),21);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.insert(v.end() ,2,15);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    // inserting a vector into another
    vector <int> v2(3,50);
    v.insert(v.begin(),v2.begin(),v2.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<endl<<"The number of elements in vector v are : "<<v.size()<<endl;
    v.swap(v2);
    cout<<" now v1 is : ";
    for(auto it : v){
        cout<<it<<' ';
    }
    cout<<endl;
    cout<<"v2 is : ";
    for(auto it: v2){
        cout<<it<< " ";
    }
    cout<<"\n after swapping again :"<<endl;
    v.swap(v2);
    cout<<" now v1 is : ";
    for(auto it : v){
        cout<<it<<' ';
    }
    cout<<endl;
    cout<<"v2 is : ";
    for(auto it: v2){
        cout<<it<< " ";
    }

    cout<<endl<<v2.empty();
    v2.clear();
    cout<<endl<<v2.empty();
}

void explainList(){
    list <int> ls;
    ls.push_back(3);
    ls.emplace_back(7);

    for(auto it: ls){
        cout<<it<<" ";
    }
    cout<<endl;
    ls.push_front(9);
    for(auto it: ls){
        cout<<it<<" ";
    }

}

void explainDeQue(){
    deque <int> dq;
    dq.push_back(1);
    dq.push_front(89);

    cout<<dq.front();
    cout<<endl;
    cout<<dq.back();
}

void explainStack(){
    stack <int> st;
    st.emplace(23);
    st.push(2);
    st.push(9);
    // not applicable directly
    // for(auto s: st.begin()){
    //     cout<<s<<" ";
    // }

    //stack is based on last in first out
    stack<int>temp = st;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    cout<<st.top()<<endl;
    cout<<"size:"<<st.size()<<endl;
    
    st.pop();
    cout<<st.top()<<endl;
    cout<<"size:"<<st.size()<<endl;

}

void explainQueue(){
    queue <int > q;
    q.push(1);
    q.push(8);
    q.push(23);
    q.emplace(10);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}

void explainPriorityQueue(){
    priority_queue <int> pq; //Largest element always stays on the top
    //this is a non-linear data structure and in its background a tree is maintained to do all the tasks and all
    pq.push(2);
    pq.push(30);//at the top
    pq.push(23);
    pq.emplace(1);//at the bottom
    cout<<pq.top()<<endl;
    pq.pop();//removes the top element from the queue
    cout<<pq.top()<<endl;
    //minimum priority queue //smallest element at the top always
    priority_queue<int , vector<int> , greater<int>> mpq;
    mpq.push(2);
    mpq.push(3);
    mpq.push(0);
    mpq.emplace(11);
    mpq.push(-1);
    cout<<"mpq: "<<mpq.top()<<endl;
}

void explainSet(){
    set <int> st;// stores everything in sorted order and also only stores unique elements
    st.insert(8);
    st.insert(3);
    st.emplace(1);
    st.emplace(3);
    auto it1 = st.find(1);
    cout<<*it1<<endl;
    for(auto it: st){
        cout<<it<<" ";
    }
    auto it2 = st.find(2); //if the element is not present in the set then it points to the end() so it2 will point at the next position after the last element and it1 is referring to 1 starting point so after erasing it1 to it 2 it will be completely empty

    st.erase(it1 , it2);
    // it's empty now
    for(auto it: st){
        cout<<it<<" ";
    }
}

void explainMultiSet(){
    multiset<int> mt; //multiset is same as set but only stores items in sorted order but can store multiple same elements
    mt.insert(1);
    mt.insert(5);
    mt.emplace(1);
    mt.insert(3);
    mt.insert(1);//{1,1,1,3,5}
    for(auto it: mt){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<mt.count(1)<<endl; // this will return the no of count of any element in the multiset datastructure
    
    //if you want to delete any specific itiration of the element of multiple time present element like 1 count is 3 and you want to erase only one so just use iterator

    auto it = mt.find(1);
    mt.erase(it);//or directly erase(mt.find(1)) {1,1,3,5}
    for(auto it: mt){
        cout<<it<<" ";
    }
    // or if you want to delete all occurances just use
    mt.erase(1);//all available 1 will get erased {3,5}
    cout<<endl;
     for(auto it: mt){
        cout<<it<<" ";
    }
}

void unorderedSet(){
    //upperbound and lowerbound doesn't work here else all same but the key is:

    //only stores unique element but doesn't have proper indexing and order of storing elements can be any thing fully randomize
     
    //you will be wondering why to use then the point is when you don't want any perticular order of the elements but you need is speed

    //average time complexity for the insert/search/delete is constant O(1) O(n) is very rare only if hash collison

    // Example: checking if a number exists in a list of millions → way faster than using a set or vector.

    // don't have to worry about duplicates it stores unique elem

    //this uses hashing for the storing of the data and then able to serach insert and do all operations fase will learn soon.........

    // 
}

void explainMap(){
    //stores everything but have a key and a value pair for each element to distinguish and key is always having a unique value of the key where value can be same 
    // multiple values can be stored and letter can be distinguished easity with the unique key values

    // the elements are stored in the increasing order of the key's not on the basis of values like key=1 will be the first element and then key=2 will be the next and also the data type of the key and values can be anything you want so just make alot combinations together and enjoyyy

    // map<key , value> map_name;

    //Complexity of all operations is O(log N)

    // uses balanced binary tree

    map<int , int> mp1;
    map<pair<int,int> , pair<int,int>> mp_pair;

    mp1[1]=7; //inserting [key] and giving =value;
    mp1[5]=11;
    mp1[6]=7;
    mp1[2]=9;
    mp1.insert({0,5});
    mp_pair[{1,1}]={2,7}; //inserting pair keys and pair values
    mp_pair[{2,1}]={3,7};
    mp_pair[{1,2}]={4,7};
    mp_pair[{1,9}]={44,7};
    for(auto it:mp1){
        cout<<"Key: "<<it.first<< " value: "<<it.second <<"   ";
    }
    cout << "\n🔹 Map of Pair Keys and Pair Values:\n";
    for (auto it : mp_pair) {
        cout << "Key = (" << it.first.first << ", " << it.first.second << "), "
             << "Value = (" << it.second.first << ", " << it.second.second << ")\n";
    }
    auto it = mp1.find(5); //in maps we find element just using the key to search
    cout<<"key: "<<it->first<<" value: "<<it->second<<endl; //this is how we get get the value from the iterator;

    cout<<mp1[5]<<endl;//can access elements like this by giving the key inside and getting the values out

}

void explainMultiMap(){
    //can store same key multiple time else everything is same and map[i] is not valid can't access elements like that 
    multimap <int , int> mmp;
    // mmp[2]=5;
    mmp.insert({2,5});
    mmp.insert({2,8});
    for(auto it:mmp){
        cout<<"key: "<<it.first<<" value: "<<it.second<<"\n";
    }
}

void explainUnorderedMap(){
    //everything same as the map but just have no order of storing elements and store in unsorted unknown order and which makes searching insertion and deletion so fast due to the hashing table

    // complexity for all instruction just become O(1) constant expect in worst case it goes o(N)

    // can access elements using Umap[key]

    //unique keys but no order
    unordered_map<int , string> umap;
    umap[4]="last";
    umap[1]="mid";
    umap[2]="range";
    umap[3]="new";

    for(auto it: umap){
        cout<<"key: "<<it.first<<" value: "<<it.second<<endl;
    }
    //56
}

bool comp(pair<int,int> p1 , pair<int ,int> p2){
        if(p1.second<p2.second){
            return true;
        }
        if(p1.second>p2.second){
            return false;
        }
        if(p1.first<p2.first){
            return false;
        }
        return true;
    }

void explainExtra(){
    
    //sorting: in stl we just use a sort function to sort any array vector and all and it's quite easy to impliment and saves a lot of time
    vector <int> v = {2,1,66,75,33,9,0,11};
    int arr[]={11,4,1,77,34,8,9,2};
    // to sort in descending order just use the greater<int>() in the place of comparater n the sort function at the last place so it will help you to achieve the descending ordered array sorted
    sort(arr , arr+8,greater<int>());
    for(auto it: arr){
        cout<< it <<" ";
    }
    cout<<endl;
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl<<"after sorting: "<< endl;
    sort(v.begin(),v.end() );
    for(auto it: v){
        cout<<it<<" ";
    }

    // if you want to sort in your own way then:
    pair<int , int> a[] ={{2,3} ,{1,2},{7,2},{1,9}};
    int n = sizeof(a)/sizeof(a[0]);
    //  this is my array of pairs now i want to sort this in my own way
    // it should be sorted in ascending order with respect to second element first
    // then if the second element is same it should be arranged in descending order of first element
    cout<<endl;

    sort(a , a+n , comp);//comp must be a bool function
    for(auto it: a){
        cout<<"{ "<<it.first<< "," << it.second << " }  ";
    }

    int num = 6;
    int cnt = __popcount(num);
    cout<<endl<<cnt<<endl;

    long long numm = 1248293859282;
    int cntll= __popcount(numm);
    cout<<endl<<cntll<<endl;

    cout<<"permutatons : "<<endl;

    string s = "123";
    sort(s.begin() , s.end());
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));

    int maxii = *max_element(v.begin(), v.end());
    cout<<maxii<<endl;
}

int main(){

    // explainPairs();
    // explainVectors(); 
    // explainList();
    // explainDeQue();
    explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiSet();
    // explainMap();
    // explainMultiMap();
    // explainUnorderedMap();
    // explainExtra();

    

    return 0;
}