#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers = {1,2,3,4,5,6,7,8};
    cout<<"First value : "<<numbers.front()<<endl;
        cout<<"Last value : "<<numbers.back()<<endl;
cout<<"First value using index : "<<numbers[0]<<endl;
cout<<"Size of the vector : "<<numbers.size()<<endl;
}