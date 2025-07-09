#include<iostream>
using namespace std;
int main(){
    char word[10];
    cout<<"Enter the word : ";
    cin>>word;
    for(int i=0;;i++){
        if(word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i'
        || word[i] == 'I' || word[i] == 'O' || word[i] == 'o' || word[i] == 'U' || word[i] == 'u'){
            cout<<" "<<word[i];
        }
        if(word[i] == '\0')
        break;
    }
}