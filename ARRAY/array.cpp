#include<iostream>
using namespace std;
void showarray(int array[][4],int row){
    cout<<"\nArray : "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<4;j++){
        cout<<" "<<array[i][j];
    }
    cout<<endl;
}
}
void inputarray(int array[][4],int row){
    cout<<"\nEnter the values : ";
for(int i=0;i<row;i++){
    for(int j=0;j<4;j++){
        cin>>array[i][j];
    }
}
}
int main(){
    int array[3][4];
    inputarray(array,3);
    showarray(array,3);
}