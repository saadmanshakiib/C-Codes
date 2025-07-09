#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print(vector<pair<int,int>>&v){
    int i;
    for(i=0;i<v.size();i++){
            cout<<" "<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main(){
    vector<pair<int,int>> v;
    cout<<"\nEnter the size : \n";
    int s;
    cin>>s;
    cout<<"\nEnter the values :  \n";
    for(int i=0;i<s;i++){
        cin>>v[i].first>>v[i].second;
    }
    print(v);
}