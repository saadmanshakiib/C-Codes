#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {23,89,51,66,53};
    /*cout<<"\nEnter the size of the vector : ";
    int s;
    cin>>s;
    cout<<"\nEnter the elements : \n";
    for(int i=0;i<s;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"\nprinting with loop : \n";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<"\nPrinting in reverse  : \n";
    for(auto i=v.rbegin();i!=v.rend();i++){
        cout<<" "<<*i;
    }
    vector<int>v2 = v;
cout<<"\nVector 2 : \n";
for(int i=0;i<v2.size();i++){
        cout<<" "<<v2[i];
    }
    cout<<"\nEnter the postion and the element you want to add : \n";
    int p,e,p1,e1;
    cin>>p>>e;
    v.insert(v.begin()+(p-1),e);
    cout<<"\nAfter inserting the element : \n";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<"\nEnter the position you want to delete : ";
    cin>>p1;
    v.erase(v.begin()+(p1-1));
    cout<<"\nAfter removing the value : \n";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<"\nEnter the value you want to replace : ";
    cin>>e1;
    v.emplace(v.end()-2,e1);
    cout<<"\nAfter replacing : \n";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }*/
    vector<int> :: iterator it=v.begin();
    cout<<" "<<*it;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<" "<<*it;
    }
    
}
