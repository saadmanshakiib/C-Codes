#include<iostream>
using namespace std;
int main(){
        int array[3][4];
        int array2[3][4];
        int sum=0;
cout<<"\nEnter the elements for the array1 : ";
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cin>>array[i][j];
    }
}

cout<<"\nEnter the elements for the array2 : ";
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cin>>array2[i][j];
    }
}
cout<<"\nArray 1 : \n";
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cout<<" "<<array[i][j];
    }
    cout<<endl;
}
cout<<"\nArray 2 : \n";
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cout<<" "<<array2[i][j];
    }
    cout<<endl;
}
cout<<"\nSum of all the elements of the array 1 & array 2 : \n";
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        sum = array[i][j] + array2[i][j];
        cout<<" "<<sum;
    }
    cout<<endl;
}
return 0;
}