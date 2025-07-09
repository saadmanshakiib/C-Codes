#include<iostream>
using namespace std;
int main(){
int row,col,line;
cout<<"\n\tEnter the line no : ";
cin>>line;
for(row=1;row<=line;row++){
    for(col=1;col<=line;col++){
        if(row%2==0){
            if(col%2==1){
            cout<<"O";
        }
        else{
            cout<<"X";
        }
        }
        else if(row%2==1){
            if(col%2==0){
            cout<<"O";
        }
        else{
            cout<<"X";
        }
        }
    }
    cout<<endl;

}
}
