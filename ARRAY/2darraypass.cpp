#include<iostream>
using namespace std;
void print(int array[][3]){
    cout<<"\nArray : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<array[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int array[3][3]={{2,3,4},{3,4,2},{2,3,1}};
    print(array);
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<array[i][j];
        }
        cout<<endl;
    }
}