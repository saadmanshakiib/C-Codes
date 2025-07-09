#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vectr(10,9);
    int index;
    cout<<"\nSize of the vector : "<<vectr.size()<<endl;
    for(index=0;index<10;index++){
        cout<<" "<<vectr[index];
    }
    cout<<"\nEnter the number you want to add : ";
    int num;
    cin>>num;
    cout<<"\nEnter the position that you want to add the number : ";
    int pos;
    cin>>pos;
    vectr.insert(vectr.begin()+pos-1,num);
    cout<<"\nAfter adding the number the array is : ";
    for(index=0;index<vectr.size();index++){
        cout<<" "<<vectr[index];
    }
    cout<<"\nEnter the push back number : ";
int pushbacknum;
cin>>pushbacknum;
vectr.push_back(pushbacknum);
cout<<"\nAfter pushing back the number the array is : ";
    for(index=0;index<vectr.size();index++){
        cout<<" "<<vectr[index];
    }
}