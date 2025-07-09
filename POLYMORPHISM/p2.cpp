#include<iostream>
using namespace std;
class teacher{
    public:
    void print(){
        cout<<"\nI am Teacher\n";
    }
};
class student : public teacher{
    public:
    void print(){
        cout<<"\nI am Student\n";
    }
};
class person : public student{
    public:
    void print(){
            cout<<"\nI am Person \n";
    }
};
int main(){
    cout<<"\nWelcome ";
    teacher t;
    t.print();
    student s;
    s.print();
    person p;
    p.print();

}