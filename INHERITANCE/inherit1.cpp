#include<iostream>
#define naam "Shakib"
using namespace std;
class student{
    public:
    string course;
    int id;
    void display(){
        cout<<"\nCourse Name : "<<course<<"\nID = "<<id;
    }
};
class person : public student{
    public:
    long long int contact;
};
int main(){
    cout<<"Welcome "<<naam<<endl;
student sakib;
sakib.course = "CSE";
sakib.id = 53467;
sakib.display();

    person nissan;
    nissan.course = "EEE";
    nissan.id = 53484;
    nissan.contact = 5828990;
    nissan.display();
}