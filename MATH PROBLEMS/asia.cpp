#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,v=0;
    cin>>t;
    if(1<=t<=1000){
        for(int i=1;i<=t;i++){
            int n;
            cin>>n;
            if(1<=n<pow(2,31)){
                while(n!=0){
                    cout<<n%2;
                    if(n%2==1){
                        v++;
                    }
                    n = n/2;
                }
                while(n!=0){
                int m[v];
                for(int a=0;a<v;a++){
                    m[a] = n%2;
                    n=n/2;
                }
                for(int j=v;j>=0;j--){
                    cout<<m[j];
                }
                }
                if(v%2==0){
            cout<<"\nCase : "<<i<<" even"<<endl;
        }
        else{
            cout<<"\nCase : "<<i<<" odd"<<endl;
        }
            }
        }
        
    }
}