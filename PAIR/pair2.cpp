#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome"<<endl;
    pair<string,int> p;
    p = make_pair("Sakib",53467);
    cout<<" "<<p.first<<" "<<p.second<<endl;
    p = make_pair("Sadat",52612);
    cout<<" "<<p.first<<" "<<p.second<<endl;
    pair<string,int> p1;
    p1 = {"Nissan",4782};
        cout<<" "<<p1.first<<" "<<p1.second<<endl;

}