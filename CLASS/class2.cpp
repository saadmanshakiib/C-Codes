#include<iostream>
#include<string.h>
using namespace std;
class company{
    public:
    string name;
    long long int contact;
    int id;
};
int main(){
    cout<<"Welcome"<<endl;
           company employee;
        cout<<"Enter the name of employee - "<<endl;
        cin>>employee.name;
        cout<<"Enter the id of the employee - "<<endl;
        cin>>employee.id;
        cout<<"Enter the contact no of the employee "<<endl;
        cin>>employee.contact;
        cout<<"Name of the employee "<<employee.name<<endl;
                cout<<"ID of the employee "<<employee.id<<endl;
        cout<<"Contact of the employee "<<employee.contact<<endl;
    return 0;
}