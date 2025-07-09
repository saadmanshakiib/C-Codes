#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[] = "Saadman";
    char middlename[] = "Shakib Al Hasan";
    char lastname[] = "Nisha";
    cout<<"\n\nFirst name : "<<name;
        cout<<"\n\nMiddle name : "<<middlename;
    cout<<"\n\nLast name : "<<lastname;
int com = strcmp(name,middlename);
int com2 = strcmp(name,lastname);
int com3 = strcmp(lastname,middlename);
int com4 = strcmp(lastname,name);
cout<<"\ncom1 : "<<com;
cout<<"\ncom2 : "<<com2;
cout<<"\ncom3 : "<<com3;
cout<<"\ncom4 : "<<com4;

}