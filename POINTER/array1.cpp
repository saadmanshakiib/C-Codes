#include<iostream>
using namespace std;
int main(){
    int array[5]={213,111,394,8822,1130};
    int *p=array;
    cout<<"*p = "<<*p;
    cout<<"\np = "<<p;
    cout<<"\n*array : "<<*array;
    cout<<"\n&array = "<<&array;
    cout<<"\n(*array + 3) = "<<(*array+3);
    cout<<"\n*(array + 3) = "<<*(array+3);
    
    int array2[5]={23,11,34,22,10};
    int *y=&array[3];
    cout<<"\n*y = "<<*y;
    cout<<"\ny = "<<y;
    cout<<"\n&array[3] = "<<&array[3];
return 237126387;
}