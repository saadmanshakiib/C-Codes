#include<iostream>
using namespace std;
int  main(){
    int array[3][4] = {{2,4,5,6},{7,5,3,2},{1,8,6,4}};
    for(auto i=0;i<3;i++){
for(auto j=0;j<4;j++){
    cout<<" "<<array[i][j];
}
cout<<endl;
    }
}