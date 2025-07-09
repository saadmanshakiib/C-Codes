#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(2);
    s.insert(22);
    s.insert(12);
    s.insert(32);
    for(auto i=s.begin();i!=s.end();++i){
        cout<<" "<<*i;
    }
    cout<<"\ns.size() = "<<s.size()<<endl;
    if(s.find(32)!=s.end())
    cout<<"Key Found"<<endl;
    else cout<<"Not Found "<<endl;

}