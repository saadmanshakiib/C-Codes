#include <iostream>

using namespace std;

int main()
{
    int num,len;
    cout<<"Enter the number of words : ";
    cin>>num;
    cout<<"\nEnter the length of the words : ";
    cin>>len;
    char a[num][len]; 
        cout<<"Enter the words : "<<endl;
    for(int i=0;i<num;i++){
        for(int j=0;j<len;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<num;i++){
            bool palindrome=false;
        for(int j=0;j<len/2-1;j++){
            if(a[i][j]!=a[i][len-j-1]){
                palindrome=true;
                break;
            }
        }
        if(palindrome){
            cout<<"Not a palindrome\n";
        }
        else {
            cout<<"Palindrome\n";
        }
    }

    return 0;
}
