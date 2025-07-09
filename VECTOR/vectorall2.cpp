#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the size of the vector : ";
    int s,elements;
    cin>>s;
    vector<int> v;
    cout<<"\nEnter the values : \n";
    for(int i=0;i<s;i++){
        cin>>elements;
        v.push_back(elements);
    }
    cout<<"\nSize of the vector is : "<<v.size();
    cout<<"\nVector elements : ";
    for(auto i=v.begin();i!=v.end();i++){
        cout<<" "<<*i;
    }
    cout<<"\nEnter the new size of the vector : ";
    int newsize;
    cin>>newsize;
    v.resize(newsize);
    for(auto i : v){
        cout<<" "<<i;
    }
    cout<<"\nEnter the new value to add : ";
    int newvalue;
    cin>>newvalue;
    v.insert(v.end(),newvalue);
    cout<<"\nAfter adding new value : ";
    for(auto i : v){
        cout<<" "<<i;
    }
    cout<<"\nFirst Value : "<< v.front();
        cout<<"\nLast Value : "<< v.back();

    cout<<"\nEnter the position you want to erase : ";
    int position;
    cin>>position;
    v.erase(v.begin()+position-1);
    cout<<"\nAfter erasing : ";
    for(auto i : v){
        cout<<" "<<i;
    }
vector<int>v2;
v.swap(v2);
cout<<"\nVector 2 : ";
for(auto i : v2){
    cout<<" "<<i;
}
cout<<"\nReversing vector : ";
cout<<"\nUsing rbegin : ";
   for(auto i = v2.rbegin(); i != v2.rend(); i++){
   cout<<" "<<*i;
   }

}