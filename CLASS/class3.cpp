#include<iostream>
using namespace std;
class student{
    public:
    string name[100];
    int id[100];
};
int main(){
cout<<"Welcome"<<endl;
int index,loop;
student cse;
cout<<"How many students of cse? "<<endl;
cin>>index;

cout<<"Enter the names of cse students  "<<endl;
for(loop=0;loop<index;loop++){
   cin>>cse.name[loop];
}

cout<<"Enter the ID of cse students  "<<endl;
for(loop=0;loop<index;loop++){
   cin>>cse.id[loop];
}
cout<<"Enter the names of cse students  "<<endl;
for(loop=0;loop<index;loop++){
   cout<<"Student "<<loop+1<<" Name - "<<cse.name[loop]<<"\n ID - "<<cse.id[loop];
   cout<<"\n";
}
return 0;
}