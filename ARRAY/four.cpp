#include<iostream>
using namespace std;
int main(){
    float array[8];
    cout<<"Enter the values of array : ";
    for(int i=0;i<8;i++){
        cin>>array[i];
    }
    float sum=0.00;
    for(int i=0;i<8;i++){
        sum = sum+array[i];
    }
    cout<<"\nSum of the array elements : "<<sum<<endl;
    cout<<"Average of the sum : "<<(sum/8.00)<<endl;
    int m = 1;
    for(int i=0;i<8;i++){
        m = m*array[i];
    }
    cout<<"\nMultiplication of the array elements : "<<m<<endl;
    


} 