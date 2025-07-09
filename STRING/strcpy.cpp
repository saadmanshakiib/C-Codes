#include<iostream>
#include<string.h>
#define name "Sadman"
using namespace std;
int main(){
    cout<<"\nWelcome "<<name<<endl;
    char str[100];
    cout<<"\nEnter the string : ";
    cin>>str;
    char str2[100];
    cout<<"\nEnter the string 2 : ";
    cin>>str2;
    strcpy(str,str2);
    cout<<"\nAfter copying : "<<str<<endl;
    cout<<"\nThe length of the string 1 is : "<<strlen(str)<<endl;
    cout<<"\nThe length of the string 2 is : "<<strlen(str2)<<endl;
    cout<<"\nConcatanets of strings  : "<<strcat(str,str2)<<endl;
    cout<<"\nComparison of strings : "<<strcmp(str,str2);
}