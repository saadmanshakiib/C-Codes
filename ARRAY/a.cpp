#include<iostream>
using namespace std;
int main(){
    int a[2][4];
    cout<<"Enter the array elements : ";
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }

    cout<<"\nArray : "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    int max = a[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
        if(max < a[i][j])
        max = a[i][j];
    }
    break;
    }
    cout<<"Max : "<<max<<endl;
    int min = a[0][0];
    for(int i=1;i<2;i++){
        for(int j=0;j<4;j++){
        if(min > a[i][j])
        min = a[i][j];
    }
    break;
    }
    cout<<"Min : "<<min<<endl;
    cout<<"Multiply : "<<max*min<<endl;

}