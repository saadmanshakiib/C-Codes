#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>id={112,22,34,562,11};
    vector<int>roll={22,56,211};
roll.swap(id);
for(int i:roll){
    cout<<" "<<i;
}
}