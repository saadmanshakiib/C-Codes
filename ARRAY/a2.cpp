#include<iostream>
using namespace std;
void calculateFine(int totalbooks,int day,char c){
if(c=='R'){
    cout<<"Fine  : "<<totalbooks*1*day<<endl;
}
else if(c=='F'){
        cout<<"Fine  : "<<totalbooks*1.5*day<<endl;
}
else if(c=='P'){
        cout<<"Fine  : "<<totalbooks*2*day<<endl;
}
else{
    cout<<"Invalid category "<<endl;
}
}
int main(){
cout<<"Enter the total number of overdue books : "<<endl;
int totaloverduebooks;
cin>>totaloverduebooks;
cout<<"Enter the number of days overdue : "<<endl;
int days;
cin>>days;
if(days>10){
    cout<<"Cant Process more than 10 Books"<<endl;
    abort();
}
cout<<"Enter the book category : "<<endl;
char category;
cin>>category;
    calculateFine(totaloverduebooks,days,category);

}