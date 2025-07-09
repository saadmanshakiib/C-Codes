#include<iostream>
using namespace std;
int main(void){
    string array[1][5];
    cout<<"\nEnter the number first then enter the country name : ";
    for(int i=0;i<1;i++){
        for(int j=0;j<5;j++){
            cin>>array[i][j];
        }
    }
    cout<<"\nOutput : "<<endl;
    for(int i=0;i<1;i++){
        cout<<" "<<i+1<<".";
        for(int j=0;j<5;j++){
            cout<<" "<<array[i][j];
        }
        cout<<endl;
    }
}