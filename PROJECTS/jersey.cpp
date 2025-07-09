#include<iostream>
#include<vector>
#define pass 950211
using namespace std;
int main(){
    vector<pair<string,int>> jersey;
    jersey.push_back(make_pair("Manchester_City_Home",750));
    jersey.push_back(make_pair("Manchester_City_Away",700));
    jersey.push_back(make_pair("Barcelona_Home",750));
    jersey.push_back(make_pair("Barcelona_Away",700));
    jersey.push_back(make_pair("Real_Madrid_Home",750));
    jersey.push_back(make_pair("Real_Madrid_Away ",700));
    jersey.push_back(make_pair("Atletico_Madrid_Home",750));
    jersey.push_back(make_pair("Atletico_Madrid_Away",700));
    jersey.push_back(make_pair("Manchester_United_Home",750));
    jersey.push_back(make_pair("Manchester_United_Away",700));
    int j1,j2,j3,j4,j5,j6,j7,j8,j9,j10=10;
    while(1){
        cout<<"\nEnter your preference : ";
    cout<<"\n1.I am the owner of the shop\n2.I am the customer ";
    int pre;
    cin>>pre;
    if(pre==1){
        cout<<"\nWelcome Please enter the pin to continue : ";
        int pin;
        cin>>pin;
        if(pin==pass){
        cout<<"\n1.Show Collection\n2.Add to collection ";
        int select;
        cin>>select;
        if(select==1){
                for(auto it : jersey){
                    cout<<" Name : "<<it.first<<" Price : "<<it.second<<endl;
                }
        }
        else if(select==2){
            cout<<"\nEnter the amount of jersey you want to add : ";
            int amount;
            cin>>amount;
            string name;
            int price;
            for(int loop=0;loop<amount;loop++){
            cout<<"\nEnter the team name and the price to add into the collection : ";
            getline(cin,name);
            cin>>price;
            jersey.push_back(make_pair(name,price));
            }
            cout<<"\nAfter adding the new collections : \n";
            for(int j=0;j<jersey.size();j++){
                    cout<<" Name : "<<jersey[j].first<<" Price : "<<jersey[j].second<<endl;
                }
        }
    }
    else{
        cout<<"Pin is incorrect ";
        abort();
    }
    }
    else if(pre==2){
        cout<<"\nWelcome to our shop ";
        cout<<"\nHere is our collection : \n";
                        cout<<"\nSelect by entering the number : \n";
        for(auto it : jersey){
                    cout<<" Name : "<<it.first<<" Price : "<<it.second<<endl;
                }
                cout<<"\nSelect by entering the number : ";
                int select;
                cin>>select;
                for(int j=0;j<jersey.size();j++){
                    if(select==j){
                        cout<<"Name : "<<jersey[j].first<<" Price : "<<jersey[j].second<<endl;
                        cout<<"\nPay taka = "<<jersey[j].second<<" to purchase ";
                        int taka;
                        cin>>taka;
                        if(taka==jersey[j].second){
                            cout<<"\nCongratulations You have bought the jersey! ";
                        }
                        else if(taka>jersey[j].second){
                            cout<<"\nCongratulations You have bought the jersey! ";
                            cout<<"\nHere is your extra "<<taka-jersey[j].second<<" tk"<<endl;
                        }
                        else if(taka<jersey[j].second){
                            cout<<"\nPlease pay more "<<(jersey[j].second-taka)<<" tk "<<endl;
                        }
                    }
                }
    }
    else{
        cout<<"\nSomething went wrong\n";
        abort();
    }
    }
}
