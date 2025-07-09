#include<iostream>
using namespace std;
int main(){
    int digit;
    cout<<"Enter the digit no : ";
    cin>>digit;
    int num1=0;
    int num2=1;
    for(int loop=2;loop<=digit;loop++){
         cout<<" "<<num1;
         int next = num1+num2;
         num1 = num2;
         num2 = next;
    }
}