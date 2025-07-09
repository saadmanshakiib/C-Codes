#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>id(10);
cout<<"Enter the roll numbers : "<<endl;
for(int index=0;index<id.size();index++){
    cin>>id[index];
}
cout<<"\nThe id for the students : ";
for(int index=0;index<id.size();index++){
    cout<<" "<<id[index];
}
id.push_back(99);
id.push_back(66);
cout<<"\nAfter pushing back : ";
for(int index=0;index<id.size();index++){
    cout<<" "<<id[index];
}
cout<<"\nVector size : "<<id.size()<<endl;
id.insert(id.begin(),34);
id.insert(id.begin()+4,66);
id.insert(id.end()-2,41);
id.insert(id.end(),20);
cout<<"Final ID : ";
for(int index=0;index<id.size();index++){
    cout<<" "<<id[index];
}
}