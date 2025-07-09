#include<iostream>
using namespace std;
int main(){
    pair<int,string>p;
    p = make_pair(53467,"- Sadman");
    cout<<" "<<p.first<<" "<<p.second<<endl;
    //two types of declaration
    pair<int,string>p1;
    p1 = {53484,"- Someone"};
    cout<<" "<<p1.first<<" "<<p1.second<<endl;
    //copy
    p1 = p;
        cout<<" "<<p1.first<<" "<<p1.second<<endl;
}