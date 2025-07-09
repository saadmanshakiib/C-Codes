#include<iostream>
using namespace std;
void n(int a,int b){
    a=20;
    b=78;
}
int main(){
    int p=23;
    n(p,p);
    cout<<p;
}