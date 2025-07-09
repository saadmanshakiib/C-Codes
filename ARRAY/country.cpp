#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    int c=0;
    for(i=0;i<5;i++){
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0)
            c++;
        }
        if(c==0){
            cout<<" "<<a[i]<<" is prime "<<endl;
        }
        c=0;
    }

}