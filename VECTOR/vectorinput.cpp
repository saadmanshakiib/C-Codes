#include<iostream>
#include<vector>
using namespace std;
int main(){
//vector<int>v;
cout<<"\nEnter the size of the vector : ";
int sz;
cin>>sz;
vector<int>v(sz);
cout<<"\nSize of the vector : "<<v.size();
cout<<"\nEnter the elements : ";
for(auto i=0;i<v.size();i++){
    cin>>v[i];
}
cout<<"\nThe values of the vector : ";
for(auto i=0;i<v.size();i++){
    cout<<" "<<v[i];
}
}