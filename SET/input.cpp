#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\nWelcome\n";
    cout<<"\nEnter the size of the set : ";
    int n;
    cin>>n;
    set<string>s;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        s.insert(a);
    }
    cout<<"\nThe values : \n";
    for(auto i=s.begin();i!=s.end();i++){
        cout<<" "<<*i<<endl;
    }
}