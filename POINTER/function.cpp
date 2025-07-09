#include<iostream>
using namespace std;
void show(int *a){
cout<<"\nThe value : "<<a;
*a = 898;
}
int main(){
    int a=90;
    int *p;
    p = &a;
    show(&a);
    show(&a);
    cout<<"\na = "<<a;
}