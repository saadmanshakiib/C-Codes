#include<iostream>
using namespace std;
int transfermoney(long int accnumber,int am,int mainaccbalance){
    cout<<" "<<am<<" Amount of money has been transfered to the account no : "<<accnumber<<endl;
    return mainaccbalance-am;
}
int withdrawmoney(long mainaccbalance){
    cout<<"Enter the amount you want to withdraw : ";
    int amount;
    cin>>amount;
    cout<<"Receive your money : "<<amount<<endl;
//cout<<"New Balance : "<<(mainaccbalance-amount);
    return mainaccbalance-amount;
}
int main(){
    cout<<"ATM Machine"<<endl;
    cout<<"Enter your main account balance  : ";
    long int mainaccountbalance;
    cin>>mainaccountbalance;
    cout<<"Enter the choice \t1.Withdrawing Money\t2.Transfer Money\t3.Check your recent transactions"<<endl;
    int choice;
    cin>>choice;
    //int newbalance = withdrawmoney(mainaccountbalance);
    if(choice==1){
        cout<<"Main Account balance : "<<withdrawmoney(mainaccountbalance);
    }
    else if (choice==2){
        cout<<"Enter the recipients account number : "<<endl;
         long int accountnumber;
         cin>>accountnumber;
         cout<<"Enter the amount : ";
         int amount;
         cin>>amount;
        transfermoney(accountnumber,amount,mainaccountbalance);
        
    }
}