#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>id(5);
id[0]=90;
id[1]=91;
id[2]=92;
id[3]=93;
id[4]=94;
for(int i:id){
    cout<<" "<<i;
}
id[2] = 34;
for(int i:id){
    cout<<" "<<i;
}
}