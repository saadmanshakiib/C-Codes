#include<iostream>
using namespace std;
int main(){
    const int row=3,col=4;
    int array[3][4];
cout<<"\nEnter the elements for the array : ";
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cin>>array[i][j];
    }
}
//input neya sesh
for(auto i=0;i<3;i++){
    for(auto j=0;j<4;j++){
        cout<<" "<<array[i][j];
    }
    cout<<endl;
}
//input neya seshe print korlam
cout<<"\n\nExchanging the row with col : \n";
//exchange mane row er jaygay col print korbo 
// col er jaygay row
// taile just loop ta age pore kore dilei hobe
// age i silo 1st e , ekhn j dibo 1st e 
for(auto j=0;j<4;j++){
    for(auto i=0;i<4;i++){
        cout<<" "<<array[i][j];
    }
    cout<<endl;
}
}