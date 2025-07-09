#include<iostream>
using namespace std;
int main(void){
    // int main er vitor (void) deya thakte pare error tracing e
    // eta error na kintu. evabe lekha jay kono somossa nai
    cout<<"Enter any number : "<<endl;
    int number;
    cin>>number;
    int array[number];
    int total=0;
    int max,min;
    cout<<"\nEnter the values : "<<endl;
for(int i=0;i<number;i++){
        cin>>array[i];
    }
    for(int i=0;i<number;i++){
        total = total+array[i];
    }
    cout<<"Total : "<<total<<endl;
    if(total%2==0){
                            max = array[0];
        for(int i=0;i<number;i++){
            if(max < array[i]){
                max = array[i];
            }
        }
        cout<<"Max : "<<max<<endl;
    }
    else if(total%2!=0){
                        min = array[0];
         for(int i=0;i<number;i++){
            if(min > array[i]){
                min = array[i];
            }
        }
        cout<<"Min : "<<min<<endl;
    }
    }
