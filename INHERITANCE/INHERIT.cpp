#include<iostream>
using namespace std;
#define owner "Shakib"
#define pass 53467
        class student{
            public:
            string name[10000];
            long int id[10000];
            string course[10000];
        };
        class employee : public student{};
int main(){
    start:
    cout<<"\nHello "<<owner<<endl;
    cout<<"\nEnter the password : ";
    int pin;
    cin>>pin;
    if(pin==pass){
        cout<<"\nWelcome "<<owner;
        student engineer;
            cout<<"\n\n\tEnter the number of the students : "<<endl;
            int number;
            cin>>number;
            cout<<"\n\n\tEnter the name of the students : "<<endl;
            for(int index=0;index<number;index++){
                cout<<"\n\n\tName of student "<<(index+1)<<" : ";
                cin>>engineer.name[index];
                cout<<"\n\n\tID of student "<<(index+1)<<" : ";
                cin>>engineer.id[index];
                cout<<"\n\n\tCourse of student "<<(index+1)<<" : ";
                cin>>engineer.course[index];
            }
            for(int index=0;index<number;index++){
                cout<<"\n\n\t"<<(index+1)<<". Name : "<<engineer.name[index];
                cout<<"\n\n\t"<<(index+1)<<". ID : "<<engineer.id[index];
                cout<<"\n\n\t"<<(index+1)<<". course : "<<engineer.course[index];
        }

        employee teacher;
                        cout<<"\n\n\tEnter the number of the teachers : "<<endl;
            int number;
            cin>>number;
            cout<<"\n\n\tEnter the name of the teachers - "<<endl;
            for(int index=0;index<number;index++){
                cout<<"\n\n\tName of teacher "<<(index+1)<<" : ";
                cin>>teacher.name[index];
                cout<<"\n\n\tID of teacher "<<(index+1)<<" : ";
                cin>>teacher.id[index];
                cout<<"\n\n\tCourse of teacher "<<(index+1)<<" : ";
                cin>>teacher.course[index];
            }
         for(int index=0;index<number;index++){
                cout<<"\n\n\t"<<(index+1)<<". Name : "<<teacher.name[index];
                cout<<"\n\n\t"<<(index+1)<<". ID : "<<teacher.id[index];
                cout<<"\n\n\t"<<(index+1)<<". course : "<<teacher.course[index];
        }
    }
    else{
        cout<<"\nTry again"<<endl;
        goto start;
}
}