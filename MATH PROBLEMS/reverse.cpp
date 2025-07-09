#include<iostream>
using namespace std;
int main(){
cout<<"\nEnter the number "<<endl;
int num;
cin>>num;
while(num>0){
int last = num%10;
num = num/10;
cout<<last;
}
}