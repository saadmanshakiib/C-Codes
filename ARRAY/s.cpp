#include<iostream>
using namespace std;
int main(void){
    cout<<"Enter the row number for the array : ";
    int r;
    cin>>r;
    cout<<"\nEnter the col number for the array : ";
    int c;
    cin>>c;
    float a[r][c];
    cout<<"\nEnter the values : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\nArray : "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    int count=0;
    cout<<"\nEnter the value you want to search : "<<endl;
    int v;
    cin>>v;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] == v)
            count++;
        }
    }
    if(count>0){
        cout<<"\nPresent in the array "<<endl;
    }
    else{
        cout<<"\nNot found"<<endl;
    }
}