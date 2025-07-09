#include<iostream>
using namespace std;
int main(){
    char name[]="Shifa";
    int id[5];
    id[0] = 5;
    id[1] = 3;
    id[2] = 4;
    id[3] = 6;
    id[4] = 7;
    for(int index=0;index<5;index++){
        cout<<id[index];
    }
    cout<<"\nName : "<<name<<endl;
}