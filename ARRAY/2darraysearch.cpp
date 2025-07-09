#include<iostream>
using namespace std;
int main(){
    float a[3][3];
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
    cout<<"\nEnter the number you want to search : "<<endl;
    int n;
    cin>>n;
    bool check = false;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j] == n){
                check = true;
                break;
            }
        }
    }
    if(check == true){
                        cout<<"Number Found "<<endl;
    }
    else {
        cout<<"\nNot Found !"<<endl;
    }

}