#include<iostream>
#include<string.h>
#define name "Sadman"
using namespace std;
int show_length(char str[]){
cout<<"\nThe string is "<<str;
int index=0;
while(str[index] != '\0'){
    index++;
}
        cout<<"\nThe length of the string is "<<index;
        return 0;
}
int main(){
    cout<<"\nWelcome "<<name<<endl;
    char str[100];
    cout<<"\nEnter the string : ";
    cin>>str;
    show_length(str);
    return 0;
}