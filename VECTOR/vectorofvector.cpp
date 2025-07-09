#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    cout<<" Size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
}
int main(){
    cout<<"\nEnter the number of total vectors : ";
    int total;
    cin>>total;
    vector<int> v[total];
    for(int i=0;i<total;i++){
        cout<<"\nEnter the size of the vector "<<i+1<<endl;
        int s;
        cin>>s;
        for(int j=0;j<s;j++){
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    cout<<"\noutput : \n";
    for(int i=0;i<total;i++){
        print(v[i]);  
    }
    }
