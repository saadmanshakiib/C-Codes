#include<iostream>
using namespace std;
int printarray(int a[3][3]){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" "<<a[i][j];
    }
    cout<<endl;
}
}
int main(){
    int r,c;
    cout<<"\nEnter the row : ";
    cin>>r;
    cout<<"\nEnter the col : ";
    cin>>c;
    int a[3][3];
    cout<<"\nEnter the elements : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    printarray(a);

}