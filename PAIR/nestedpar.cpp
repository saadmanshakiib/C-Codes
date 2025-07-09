#include<iostream>
using namespace std;
int main(){
    pair<int,pair<int,int>>p;
    p.first = 69;
    p.second.first = 45;
    p.second.second = 34;
    cout<<" "<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}