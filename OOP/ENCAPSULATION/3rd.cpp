#include<iostream>
using namespace std;

int main(){ 
    class product{
    private:
    int pass;
    public:
string name;
int code;
int price;
void print(){
cout<<"\nName : "<<name<<" Code : "<<code<<" Price : "<<price<<endl;
}
void set(string n,int c,int p){
    name=n;
    code=c;
    price=p;
}
void setpass(int p){
pass=p;
}
void printpass(){
    cout<<"\nPass : "<<pass<<endl;
}
};
product tv,mobile;
tv.set("Samsung",6963,89000);
mobile.set("Realme",4321,45000);
tv.setpass(950211);
mobile.setpass(1983);
tv.print();
mobile.print();
tv.printpass();
mobile.printpass();
}