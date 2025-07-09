#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vectr(10,8);
    cout<<"The size of the vector : "<<vectr.size()<<endl;
for(int index=0;index<vectr.size();index++){
    cout<<" "<<vectr[index];
}
cout<<"\n"<<endl;
vectr.push_back(9);
vectr.push_back(3);
cout<<"After pushing back : "<<endl;
for(int index=0;index<vectr.size();index++){
    cout<<" "<<vectr[index];
}
cout<<"\n"<<endl;
vectr.insert(vectr.begin(),2);
vectr.insert(vectr.begin()+3,5);
vectr.insert(vectr.end(),7);
vectr.insert(vectr.end()-4,5);
cout<<"After inserting values : "<<endl;
for(int index=0;index<vectr.size();index++){
    cout<<" "<<vectr[index];
}
cout<<"\nFront value : "<<vectr.front()<<endl;
cout<<"Back value : "<<vectr.back()<<endl;

}