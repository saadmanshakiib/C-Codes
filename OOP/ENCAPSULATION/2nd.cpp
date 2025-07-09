#include<iostream>
using namespace std;
class product{
    private:
    int pass;
    public:
string name;
int code;
int price;
void print(){
cout<<"\nName : "<<name<<" Code : "<<code<<" Price : "<<price<<" Pass : "<<pass<<endl;
}
product(string n,int c,int p,int pa){
    name=n;
    code=c;
    price=p;
    pass=pa;
}
};
int main(){
product tv("Sony",234,78000,950211),mobile("Realme",125,43000,1983);
tv.print();
mobile.print();
}