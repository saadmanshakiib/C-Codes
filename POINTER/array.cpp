#include<iostream>
using namespace std;
void print(int array[]){
  for(int i=0;i<5;i++){
    cout<<" "<<array[i];
  }  
}
int main(){
    cout<<"\nArray : ";
    int array[5]={3,5,6,7,1};
    print(array);
    int *p=array;
    cout<<"\n*p = "<<*p;
        cout<<"\np = "<<p;

}