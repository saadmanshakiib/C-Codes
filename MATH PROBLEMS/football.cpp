#include<iostream>
#include <string.h>
using namespace std;
int main(){
    char team1[100];
    char team2[100];
    cout<<"\nEnter the team 1 name ";
    cin>>team1;
    cout<<"\nEnter the team 2 name ";
    cin>>team2;
    if(strcmp(team1,team2)!=0){
        cout<<"Enter the goal scored by team1 : ";
        int goal1;
        cin>>goal1;
        cout<<"\nEnter the goal scored by team 2 : ";
        int goal2;
        cin>>goal2;
        cout<<"Team 1 scored : "<<goal1<<"\nTeam 2 scored : "<<goal2<<endl;
        if(goal1 > goal2){
            cout<<"\nTeam 1 is the winner"<<endl;
        }
        else if(goal2 > goal1){
            cout<<"Team 2 is the winner "<<endl;
        }
        else{
            cout<<"Match drawn"<<endl;
        }
    }
    else{
        cout<<"\nBoth team name cant be same"<<endl;
    }
}
