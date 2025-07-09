#include<iostream>
using namespace std;
int main(void){
    int array[5],i;
    cout<<"Enter the array elements : ";
    for(i=0;i<5;i++){
        cin>>array[i];
    }
    cout<<"Array : \n";
    for(i=0;i<5;i++){
        cout<<" "<<array[i];
    }
    
    for(i=0;i<5;i++){
        if(array[i]%2==0){
            array[i] = 0;
        }
        if(array[i]!=0){
            array[i] = 1;
        }
    }
    cout<<"\nAfter replacing : \n";
    for(i=0;i<5;i++){
        cout<<" "<<array[i];
    }
}