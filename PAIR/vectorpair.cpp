#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<string,int>>v;
    cout<<"\nEnter the size of the vector : ";
    int s,b;
    cin>>s;
    string a;
    for(int i=0;i<s;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    cout<<"\nOutput : \n";
    for(int i=0;i<s;i++){
        cout<<" "<<v[i].first<<" "<<v[i].second<<endl;
    }

}