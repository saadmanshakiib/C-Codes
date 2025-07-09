#include<iostream>
#include<vector>
using namespace std;
int vector_print(vector<int>v){
    cout<<"\nThe values : \n";
    int i;
    for(i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    v.push_back(90);
}
int main(){
    vector<int> v;
    cout<<"\nEnter the size : ";
    int size,a;
    cin>>size;
    int index;
    int i;
    cout<<"\nEnter the values : \n";
    for(i=0;i<size;i++){
        cin>>a;
        v.push_back(a);
    }
    vector_print(v);
    vector<int>v2=v;
    vector_print(v2);
    vector<int>v3;
    v.swap(v3);
    vector_print(v3);

v.emplace(v.begin()+1,40);
    vector_print(v);
v2.insert(v2.end()-2,69);
    vector_print(v);
v3.erase(v3.begin()+2);
    vector_print(v);
    

}