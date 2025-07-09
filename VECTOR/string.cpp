#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the vector size : "<<endl;
    int sz;
    cin>>sz;
        vector<string> name(sz);
        cout<<"\nThe size of the vector is : "<<name.size();
        cout<<"\nEnter the names of the students : ";
for(auto index=0;index<name.size();index++){
cin>>name[index];
}
cout<<"\nNames : ";
for(auto index=0;index<name.size();index++){
cout<<" "<<name[index];
}
cout<<"\nEnter the name to add in last of the queue : ";
string last_name;
cin>>last_name;
name.push_back(last_name);
cout<<"\nEnter the name to insert in middle of the queue : ";
string middle_name;
cin>>middle_name;
name.insert(name.begin()+2,middle_name);
cout<<"\nLatest vector members : ";
for(auto index=0;index<name.size();index++){
cout<<" "<<name[index];
}
cout<<"\nReversing the vector : ";
for(auto index=name.rbegin();index!=name.rend();index++){
cout<<" "<<*index;
}
cout<<"\nDeleting the last value : ";
name.pop_back();
for(auto index=0;index<name.size();index++){
cout<<" "<<name[index];
}
}