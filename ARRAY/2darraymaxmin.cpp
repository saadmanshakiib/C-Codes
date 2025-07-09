#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    cout<<"Enter the array elements : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\nArray : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    int max = a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max < a[i][j])
            max = a[i][j];
        }
    }
    cout<<"Max : "<<max<<endl;
    int min = a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            min = a[i][j];
        }
    }
    cout<<"Min : "<<min<<endl;

}