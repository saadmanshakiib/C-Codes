#include<iostream>
#define name "Shakib"
using namespace std;
class veichle{
public :
string brandname;
long int price;
    int display(){
        cout<<"\nBike Name : "<<brandname<<"\nPrice : "<<price<<endl;
    }
};
int main(){
veichle bike;
bike.brandname = "Royel Enfield";
bike.price = 560,000;
bike.display();
}