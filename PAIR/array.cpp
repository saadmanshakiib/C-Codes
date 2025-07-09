#include<iostream>
using namespace std;
int  main(){
    pair<int,int>array[3];
    array[0] = {23,54};
        array[1] = {12,56};
    array[2] = {93,68};
for(int i=0;i<3;i++){
    cout<<array[i].first<<" "<<array[i].second<<endl;
}
swap(array[0],array[2]);
cout<<"After swaping : ";
for(int i=0;i<3;i++){
    cout<<array[i].first<<" "<<array[i].second<<endl;
}
}