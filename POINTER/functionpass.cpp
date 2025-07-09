#include<iostream>
using namespace std;
void change(int &c){
    int d=c;
    cout<<d;
    int *x=&c;
    cout<<x;
    c=76;
}
int main(){
    int c=90;
    cout<<"\nC = "<<c;
    change(c);
    cout<<c;
}