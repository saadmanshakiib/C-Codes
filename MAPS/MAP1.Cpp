#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[5347] = {"saadman"};
    m[4356] = {"nissan"};
    m[6272] = {"Sadat"};
    cout<<"\nMap : \n";
    for(auto i=m.begin();i!=m.end();i++){
        cout<<" "<<(*i).first<<" "<<(*i).second<<endl;
    }
    cout<<"\nAfter finding the value : \n";
   auto it =  m.find(6272);// uses a loop and tries to find the value 
   if(it==m.end()){ //if there is no value it returns the end iterator
    cout<<"no value";
   }
   else{
    cout<<(*it).first<<" "<<(*it).second<<endl;
   }
   m.erase(6272);//removes the element
   cout<<"\nAfter removing : \n";
   for(auto i=m.begin();i!=m.end();i++){
        cout<<" "<<(*i).first<<" "<<(*i).second<<endl;
    }
    //we can also use value of it to erase the value
    cout<<"\nAfter erasing by iterator : \n";
    auto it2 = m.find(4356);
    m.erase(it2);
    for(auto i=m.begin();i!=m.end();i++){
        cout<<" "<<(*i).first<<" "<<(*i).second<<endl;
    }
}