#include<iostream>
#include<list>
#define Name "Shakib"
using namespace std;
int main(){
cout<<"\nWelcome : "<<Name;
list<string>name;
cout<<"\n\tEnter the number of the students : ";
int no;
cin>>no;
string n;
cout<<"\n\tEnter the name of the students : ";
for(int loop=1;loop<=no;loop++){
    cin>>n;
    name.push_back(n);
}
cout<<"\n\n\tName of the students : ";
for(auto i : name){
    cout<<" "<<i;
}
cout<<"\nAdd one student : ";
string n1 = "Nissan";

return 0;
}