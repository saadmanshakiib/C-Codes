#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<string>name;
name.push_back("sadman");
name.push_back("sakib");
name.push_back("sadat");
for(int i=0;i<name.size();i++){
    cout<<name[i]<<endl;
}
cout<<"Size of the vector : "<<name.size()<<endl;
}