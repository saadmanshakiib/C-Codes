#include<iostream>
using namespace std;
int main(void){
    float array1[6];
    float array2[6];
    float array3[6];
    int i,j;
    cout<<"\nInput for Array 1 : ";
    for(i=0;i<6;i++){
        cin>>array1[i];
    }
    cout<<"\nInput for Array 2 : \n";
    for(i=0;i<6;i++){
        cin>>array2[i];
    }
    cout<<"\nArray 1 : "<<endl;
    for(i=0;i<6;i++){
        cout<<" "<<array1[i];
    }
    cout<<"\nArray 2 : "<<endl;
    for(i=0;i<6;i++){
        cout<<" "<<array2[i];
    }
    cout<<"\nFinal Array : \n";
    for(i=0,j=5;i<6,j>=0;i++,j--){
        cout<<" "<<array1[i] * array2[j];
    }
    
}