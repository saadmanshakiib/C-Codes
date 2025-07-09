#include<iostream>
using namespace std;
int main(){
    int row,col,line;
    cout<<"\nEnter the number of lines : ";
    cin>>line;
    for(row=1;row<=line;row++){
        for(col=1;col<=row;col++){
            cout<<" "<<row;
        }
        cout<<"\n";
    }
}