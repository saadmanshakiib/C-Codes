#include<iostream>
using namespace std;
int main(){
    float cg[3];
    cout<<"Enter the cgpa of three students : "<<endl;
    for(int i=0;i<3;i++){
        cin>>cg[i];
    }
    float lowest = cg[0];
    for(int i=0;i<3;i++){
        if(lowest > cg[i]){
            lowest = cg[i];
        }
    }
    cout<<"\nLowest cg : "<<lowest<<endl;
}