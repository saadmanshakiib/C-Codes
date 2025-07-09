#include<iostream>
using namespace std;
int main(void){
float a[2][4];
int i,j;
cout<<"\nEnter the values : ";
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
        cin>>a[i][j];
    }
}
cout<<"\nArray : "<<endl;
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
        cout<<" "<<a[i][j];
    }
    cout<<endl;
}
float max = a[0][0];
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
    if(max < a[i][j]){
        max = a[i][j];
    }
    }
    break;
}
cout<<"Max : "<<max;

float min = a[0][0];
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
    if(min > a[i][j]){
        min = a[i][j];
    }
    }
}
cout<<"\nMin : "<<min;
cout<<"\nMultiplication : "<<max*min<<endl;

}