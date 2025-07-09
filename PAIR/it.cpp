#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    cout<<"\nEnter the size of the vector : ";
    int s,a,b;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    cout<<"\nWithout iterator : \n";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<"\nElements : \n";
    vector<pair<int,int>> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<" "<<(*it).first<<" "<<(*it).second<<endl;
    }
cout<<"\nUsing for each loop : \n";

}