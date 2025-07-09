#include<iostream>
using namespace std;
class student{
    private:
    int pass;
    double cgpa;
    public:
    string name;
    int id;
    void print(){
        cout<<"\nMajor : "<<" ID : "<<id<<endl;
    }
    student(string n,int i){
        name=n;
        id=i;
    }
    void setpass_cg(int p,double cg){
        pass=p;
        cgpa = cg;
    }
    void printpass(){
        cout<<"\nPass : "<<pass<<" CG : "<<cgpa;
    }
};
int main(){
cout<<"\nWelcome"<<endl;
student sakib("CSE",53467),sadman("EEE",53484);
sakib.print();
sadman.print();
sakib.setpass_cg(950211,3.80);
sadman.setpass_cg(4567,3.68);
sakib.printpass();
sadman.printpass();
}