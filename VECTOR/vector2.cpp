#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(23);
    v.push_back(12);
    v.push_back(67);
    v.push_back(90);
    v.push_back(45);
        cout<<"Values inside vector : "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
cout<<"Size of the vector : "<<v.size()<<endl;
cout<<"capacity of the vector : "<<v.capacity()<<endl;

}