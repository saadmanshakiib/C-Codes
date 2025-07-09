#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<string> student;
    student={"Sadat","Farhan"};
    cout<<"\nStudent vector size : "<<student.size();
    cout<<"\nStudent vector elements : ";
    for(auto index=0;index<student.size();index++){
        cout<<" "<<student[index];
    }
    student.insert(student.begin(),"Nissan");
    student.insert(student.end()-2,"Sams");
    student.push_back("Shihab");
    student.insert(student.begin()+2,"Jobayer");
    cout<<"\nNow the vector is : ";
    for(auto i=0;i<student.size();i++){
        cout<<" "<<student[i];
    }
}
