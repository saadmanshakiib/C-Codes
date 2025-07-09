#include<iostream>
using namespace std;
class product{
    public:
string name;
int price;
int code;
void set(string s,int p,int c){
name=s;
price=p;
code=c;
 }
 void print(){
    cout<<"\nNAME : "<<name<<" CODE : "<<code<<" PRICE : "<<price<<endl;
 }
};
int main(){
    cout<<"\nEnter the total number of the product : ";
    int total;
    cin>>total;
product p[total];
for(int index=0;index<total;index++){
    cout<<"\nEnter the name,price,code of the product "<<index+1<<" : ";
cin>>p[index].name>>p[index].price>>p[index].code;
p[index].set(p[index].name,p[index].price,p[index].code);
}
for(int index=0;index<total;index++){
    p[index].print();
}
}