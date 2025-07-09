#include<iostream>
using namespace std;
int main(){
    cout<<"\nEnter the array size : ";
    int size;
    cin>>size;
    pair<int,int>array[size];
    cout<<"\nEnter the values : ";
    for(int i=0;i<size;i++){
        cin>>array[i].first;
        cin>>array[i].second;
    }
    for(int i=0;i<size;i++){
        cout<<" "<<array[i].first<<" "<<array[i].second<<endl;
    }
    cout<<"\nEnter the indexes you want to swap : ";
    int index1,index2;
    cin>>index1>>index2;
    swap(array[index1],array[index2]);
    cout<<"\nAfter swaping values : "<<endl;
    for(int i=0;i<size;i++){
        cout<<" "<<array[i].first<<" "<<array[i].second<<endl;
    }
}