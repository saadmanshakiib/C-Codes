#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> name(3);
    name[0]="Sadat";
    name[1]="Jobayer";
    name[2]="Sams";
    cout<<"Size before pushing back : "<<name.size()<<endl;
    name.push_back("Sakib");
    name.push_back("Sadman");
    name.push_back("Nissan");
    for(int i=0;i<name.size();i++){
        cout<<name[i]<<endl;
    }
    cout<<"Size After pushing back : "<<name.size()<<endl;
}