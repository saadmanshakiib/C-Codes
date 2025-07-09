#include<iostream>
#define name "Shakib"
using namespace std;
class veichle{
public :
string brandname[5];
long int cprice[5];
};
int main(){
cout<<"\nWelcome "<<name<<endl;
veichle car;
cout<<"\nEnter the brand names for the car : "<<endl;
for(int index=0;index<5;index++){
    cout<<"\nCar Brand Name of car "<<index+1<<" : ";
    cin>>car.brandname[index];
}
for(int index=0;index<5;index++){
    cout<<"\nCar Price of "<<car.brandname[index]<<" : ";
    cin>>car.brandname[index];
}
for(int index=0;index<5;index++){
cout<<"\nCar Name : "<<car.brandname[index]<<" price : "<<car.cprice[index];
}
return 0;
}