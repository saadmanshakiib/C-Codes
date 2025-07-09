#include<iostream>
using namespace std;
class product{
    public:
    string name;
    int code;
    int price;
    void set(string name,int code,int price){
        this->name;
        this->code;
        this->price;
    }
    void print(){
        cout<<"\nName : "<<name<<" Code : "<<code<<" Price : "<<price<<endl;
    }
};
int main(void){
    cout<<"\nWelcome ";
    cout<<"\nEnter the number of total products : \n";
    int total;
    cin>>total;
    product Product[total];
    for(int i=0;i<total;i++){
            cout<<"\nEnter the name of the product : "<<i+1;
            cin>>Product[i].name;
            cout<<"\nEnter the code of the product "<<i+1;
            cin>>Product[i].code;
            cout<<"\nEnter the price of the product "<<i+1;
            cin>>Product[i].price;
            Product[i].set(Product[i].name,Product[i].code,Product[i].price);
    }
    for(int i=0;i<total;i++){
        Product[i].print();
    }

    
}