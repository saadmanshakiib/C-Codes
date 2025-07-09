#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v;
   for(auto i=0;i<10;i++){
    v.push_back(i);
   }
   cout<<"\nValues of the vector : ";
for(auto i=0;i<10;i++){
    cout<<" "<<v[i];
   }
   cout<<"\nUsing rbegin : ";
   for(auto i = v.begin(); i != v.end(); i++){
      cout<<" "<<*i;
   }
   cout<<"\nUsing rbegin : ";
   for(auto i = v.rbegin(); i != v.rend(); i++){
   cout<<" "<<*i;
   }
   
}