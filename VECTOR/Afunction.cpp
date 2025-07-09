#include<iostream>
#include<vector>
using namespace std;
int printvector(vector<int>&v){
    for(int i=0;i<v.size();i++){
    cout<<" "<<v[i];
}
v.push_back(69);
}
int main(){
cout<<"\nEnter the total number of the values of vector : ";
int total;
cin>>total;
vector<int>v;
cout<<"\nEnter the values : ";
int values;
for(int i=0;i<total;i++){
    cin>>values;
    v.push_back(values);
}
//input done
cout<<"\nVector 1 : ";
printvector(v);
vector<int>v2 = v;
cout<<"\nVector 2 : ";
printvector(v2);
cout<<"\nVector 1 : ";
printvector(v);

}