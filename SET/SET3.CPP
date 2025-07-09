#include<iostream>
#include<set>
using namespace std;
int main(){
set<int>s;
s.insert(3);
s.insert(5);
s.insert(7);
s.insert(9);
s.insert(10);

cout<<"\nUsing For loop : "<<endl;
for(auto i=s.begin();i!=s.end();i++){
    cout<<" "<<*i;
}
cout<<"\nUsing Auto : "<<endl;
for(auto i : s) cout<<" "<<i;
//if we use int we should use pointer
cout<<"\nReverse : "<<endl;
for(auto i=s.rbegin();i!=s.rend();i++) cout<<" "<<*i;
s.insert(4);
cout<<"\nAfter inserting 4 in  : "<<endl;
for(auto i : s) cout<<" "<<i;
int k = 90;

    if(s.find(k) != s.end()) cout<<"Found"<<endl;
    else cout<<"\nNot Found"<<endl;

}