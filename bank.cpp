#include<iostream>
using namespace std;
int main(){
    int withdraw,deposit;
    int balance = 1000;
    char choice;
    string password;
    string correct = "pakistan";
    cout<<"Enter password: ";
    cin>>password;
    if (password == correct){
        cout<<"Press 1 for Check balance"<<endl;
        cout<<"Press 2 for Withdraw"<<endl;
        cout<<"Press 3 for Deposit"<<endl;
        cout<<"Press 4 for Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case'1': 
        balance = balance - 2;
        cout<<balance;
            break;
        case'2': 
        cout<<"Enter balance you want to withdraw: ";
        cin>>withdraw;
        balance = balance - withdraw;
        cout<<"Your balance is "<<balance;
            break;
        case'3': 
        cout<<"Enter balance you want to deposit:";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"your balance is "<<balance;
            break;
        case'4': cout<<"Exit";
            break;
        default:
            cout<<"Invalid choice!";
        }
        }
    else
    {
        cout<<"incorrect password";
    }
}