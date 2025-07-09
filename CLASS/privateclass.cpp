#include<iostream>
using namespace std;
class student{
private:
int portal_pass = 950211;
long long int contact = 161582899;

    public:
    string name[10];
    int id[10];
    void getdata(int portal_pass,int contact){
        cout<<"Your portal pass : "<<portal_pass<<endl;
        cout<<"Contact : "<<contact<<endl;
    }
};
int main(){
    student cse;
cout<<"Enter the names & id for the students : "<<endl;
for(int index=0,index2=0;index<10,index2<10;index++,index2++){
cin>>cse.name[index];
cin>>cse.id[index2];
}
getchar();
cout<<"The cse students : "<<endl;
for(int index=0,num=1;index<10,num<11;index++,num++){
cout<<num<<"."<<" "<<cse.name[index]<<" ID - "<<cse.id[index];
cout<<"\n";
}
return 0;
}