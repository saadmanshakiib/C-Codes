#include<iostream>
using namespace std;
int main(){
    int number;
    int factorial = 1;
    cout<<"\nEnter the number : ";
    cin>>number;
    for(int loop=5;loop>=1;loop--){
        factorial = factorial*loop;
    }
    cout<<"\nFactorial is "<<factorial<<endl;
}