#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\nWelcome\n";
    set<string>s;
    s.insert("Sakib");
    s.insert("Sadia");
    s.insert("Sadat");
    s.insert("Sadman");
    cout<<"\nOutput using auto it : \n";
    for(auto it : s){
        cout<<" "<<it<<endl;
    }
        cout<<"\nOutput using for loop : \n";
    for(auto i=s.begin();i!=s.end();i++){
        cout<<" "<<*i<<endl;
    }
   auto it =  s.find("Saaad");
   if(it!=s.end()){
    cout<<"Found";
   }
   else{
    cout<<"\nNot Found";
   }

}