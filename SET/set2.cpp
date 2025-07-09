#include<bits/stdc++.h>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    cout<<"\nEnter the element number : "<<endl;
    int elementnumber;
    cin>>elementnumber;
    int array[elementnumber];
    cout<<"Enter the values : "<<endl;
    for(int loop=0;loop<elementnumber;loop++){
        cin>>array[loop];
    }
    cout<<"\nArray Values : \n";
    for(int loop=0;loop<elementnumber;loop++){
        cout<<" "<<array[loop];
    }
    set<int>s;
    for(int loop=0;loop<elementnumber;loop++){
        s.insert(array[loop]);
    }
    cout<<"\nSorted array using set: "<<endl;
    for(auto i : s){
        cout<<" "<<i;
    }
    cout<<"\nSort array using sort()"<<endl;
    sort(array,array+elementnumber);
    for(int loop=0;loop<elementnumber;loop++){
        cout<<" "<<array[loop];
    }
    cout<<"\nArray using begin() & end()"<<endl;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<" "<<*i;
    }
    cout<<"\nSet empty "<<s.empty()<<endl;

}