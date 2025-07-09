#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"\nEnter the value : ";
    cin>>a;
    int *p;
    p = &a;
    //same as = *p=&a;
    cout<<"\na = "<<a;
    cout<<"\n*p = "<<*p;
    cout<<"\n&a = "<<&a;
    cout<<"\np = "<<p;
}