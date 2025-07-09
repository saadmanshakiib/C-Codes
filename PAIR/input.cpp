#include<iostream>
using namespace std;
int main(void){
    cout<<"\nEnter the number of students : ";
    int numberofstudents;
    cin>>numberofstudents;
    pair<string,int> Pair[numberofstudents];
    cout<<"\nEnter the info : ";
    for(int i=0;i<numberofstudents;i++){
        cout<<"Name of Student : "<<i+1<<endl;
        cin>>Pair[i].first;
        cout<<"ID of Student : "<<i+1<<endl;
        cin>>Pair[i].second;
    }
    cout<<"\nDisplay : ";
    for(int i=0;i<numberofstudents;i++){
        cout<<"\nName : "<<Pair[i].first<<" ID : "<<Pair[i].second<<endl;
    }
}