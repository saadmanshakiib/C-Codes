#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name1[10]="Saadman";
    char name2[10];
   strncpy(name2,name1,5);
   cout<<"\n "<<name2;
      cout<<"\n "<<name1;

}