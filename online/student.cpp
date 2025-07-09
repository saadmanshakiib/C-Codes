#include<iostream>
using namespace std;
class student{
    private:
    int pass;
    public:
    string name;
    int id;
    string course;
    student(string n,int i,string c){
        name=n;
        id=i;
        course=c;
    }
};
int main(){
student s1("sakib",345,"cse");
}