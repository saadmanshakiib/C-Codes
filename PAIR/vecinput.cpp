#include<iostream>
#include<vector>
using namespace std;
void print(vector<pair<int,int>>&v){
        cout<<" Size of the vector : "<<v.size()<<endl;
        int i;
        for(i=0;i<v.size();i++){
            cout<<" "<<v[i].first<<" "<<v[i].second<<endl;
        }
}
int main(){
    int n,i;
    vector<pair<int,int>>v;
    cout<<"\nEnter the size of the vector : ";
    cin>>n;
    for(i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    print(v);
    
}