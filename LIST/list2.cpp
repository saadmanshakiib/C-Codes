#include<iostream>
#include<list>
#define name "Shakib"
using namespace std;
int main(){
cout<<"\nWelcome : "<<name;
list<int>List;
cout<<"\nEnter the number of the total elements for the list : ";
int n;
cin>>n;
cout<<"\nEnter the elements for the list : ";
int value;
for(int index=0;index<n;index++){
    cin>>value;
    List.push_back(value);
}
cout<<"\nValues of the list : ";
for(auto i : List){
cout<<" "<<i;
}
return 0;
}