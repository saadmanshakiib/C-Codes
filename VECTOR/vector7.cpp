#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.assign(5,10);
    cout<<"\nAssigning values : ";
    for(auto i=0;i<v.size();i++){
cout<<" "<<v[i];
    }
    vector<int> v2(5,10);
    cout<<"\nVector 2 : ";
    for(auto i=0;i<v.size();i++){
cout<<" "<<v2[i];
    }
    cout<<"\nDeleting last value using pop_back : ";
    v.pop_back();
    for(auto i=0;i<v.size();i++){
cout<<" "<<v[i];
    }
    cout<<"\nPush Back 5 : ";
    v.push_back(5);
    for(auto i=0;i<v.size();i++){
cout<<" "<<v[i];
    }
    cout<<"\nUsing insert to insert value : ";
    v.insert(v.begin()+2 ,4);
    for(auto i=0;i<v.size();i++){
cout<<" "<<v[i];
    }
cout<<"\nErasing 1st value : ";
v.erase(v.begin());
for(auto i=0;i<v.size();i++){
cout<<" "<<v[i];
    }
    cout<<"\nUsing emplace to insert at the beginning : ";
    v.emplace(v.begin(),5);
    for(auto i=0;i<v.size();i++){
cout<<" "<<v[i];
    }
    cout<<"\nEmplace in middle : ";
    v.emplace(v.begin()+3,3);
    for(auto i=0;i<v.size();i++){
cout<<" "<<v[i];
    }
}