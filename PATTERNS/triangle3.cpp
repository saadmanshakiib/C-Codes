#include<iostream>
using namespace std;
int main(){
    int row,col,line;
    cout<<"\nEnter the number : ";
    cin>>line;
    for(row=1;row<=line;row++){
        for(col=1;col<=row;col++){
            cout<<" "<<line;
        }
        cout<<"\n";
    }
}