#include<iostream>
using namespace std;
int c=0;
class ci{
    public:
ci(){
    c++;
    cout<<"\nSakib "<<c;
}
~ci(){
    cout<<"\ndestroy "<<c;
    c--;
}
};
int main(){
    ci c1,c2,c3,c4;
}