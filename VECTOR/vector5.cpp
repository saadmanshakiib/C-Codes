#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>data(5,4);
for(int i=0;i<data.size();i++){
    cout<<" "<<data[i];
}
data.insert(data.end(),7);
data.insert(data.begin(),6);
cout<<"\n";
vector<int>data2 = data;
for(int i=0;i<data2.size();i++){
    cout<<" "<<data2[i];
}
}