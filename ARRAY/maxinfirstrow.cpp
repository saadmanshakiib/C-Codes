#include<iostream>
using namespace std;
int main(){
    cout<<"\nEnter the row number : ";
    int row;
    cin>>row;
    cout<<"\nEnter the col number : ";
    int col;
    cin>>col;
    int array[row][col];
    cout<<"\nEnter the elements : ";
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
    int max=array[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max < array[i][j]){
                max = array[i][j];
            }
        }
        break;
       
    }
    cout<<"\nMaxmimum value of first row : "<<max<<endl;
        for(int i=1;i<row;i++){
        for(int j=0;j<col;j++){
            if(max < array[i][j]){
                max = array[i][j];
            }
        }
        break;
        
    }
        cout<<"\nMaxmimum value of secound row : "<<max<<endl;
return 0;
}