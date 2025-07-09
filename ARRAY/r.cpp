#include<iostream>
using namespace std;

void transpose(int a[][10],int row,int col ){
    cout<<"\nTranspose : "<<endl;
    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter the row number : ";
    int row;
    cin>>row;
    cout<<"\nEnter the col number : ";
    int col;
    cin>>col;

    int array[10][10];
    if(row<=10 && col<=10){
    cout<<"\nEnter the array elements : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    cout<<"\nArray : \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<" "<<array[i][j];
        }
        cout<<endl;
    }
    
    transpose(array,row,col);
}
else{
    cout<<"Error"<<endl;
}
}