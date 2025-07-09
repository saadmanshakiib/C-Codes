#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l={2,3,5,1,7};
    cout<<"\nSize of the list : "<<l.size();
    l.push_front(0);
    l.push_back(6);
    cout<<"\nPrinting list values  : ";
    for(auto i : l){
        cout<<" "<<i;
    }
}