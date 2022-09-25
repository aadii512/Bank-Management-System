#include<iostream>
#include<string>
using namespace std;
class Bank{
int pan;
int addhar,mob;
public:
char name[100],fname[40],acctype[20],mstatus[10],add[100];
int balance;
      void Open_account();
      void Deposit_money();
      void withdraw_money();
      void Display_account();
};
void Bank :: Open_account(){
    cout<<"enter your bank account name   : "<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address : "<<endl;
    cin.ignore();
    cin.getline(add,100);
    cout<<"enter your father name : "<<endl;
    cin.ignore();
    cin.getline(fname,40);
    cout<<"what type of account you want to open saving or current account : "<<endl;
    cin.ignore();
    cin.getline(acctype,20);
    cout<<"Marriage status : "<<endl;
    cin.ignore();
    cin.getline(mstatus,10);
    cout<<"enter the addhar no. : "<<endl;
    cin>>addhar;
    cout<<"enter the mobil no. : "<<endl;
    cin>>mob;
    cout<<"enter the pan card no : "<<endl;
    cin>>pan;
    cout<<"enter the amout for first deposit : "<<endl;
    cin>>balance;
    cout<<"your accout is created : "<<endl;
}
void Bank :: Deposit_money(){
int a;
cout<<"enter how much you deposit : "<<endl;
cin>>a;
balance = balance+a;
cout<<"total amount in your bank account : "<<balance<<endl;
}
void Bank :: Display_account(){
    cout<<"Name               : \t"<<name<<endl;
    cout<<"Address            : \t"<<add<<endl;
    cout<<"s/o                : \t"<<fname<<endl;
    cout<<"A/c type           : \t"<<acctype<<endl;
    cout<<"Marriage status    : \t"<<mstatus<<endl;
    cout<<"Addhar             : \t"<<addhar<<endl;
    cout<<"Customer pan       : \t"<<pan<<endl;
    cout<<"Customer mobil no  : \t"<<mob<<endl;
    cout<<"amount you deposit : \t"<<balance<<endl;
}
void Bank :: withdraw_money(){
    float amount;
     cout<<"\n withdraw                  : "<<endl;
     cout<<"Enter the amount to withdraw : "<<endl;
     cin>>amount;
     balance = balance - amount;
     cout<<"Total amount is left"<<endl<<balance<<endl;
}

int main(){
    int ch,x;
    Bank obj;
    do{
cout<<"1> Open account "<<endl;
cout<<"2> Deposit money "<<endl;
cout<<"3> withdraw money "<<endl;
cout<<"4> Display amount "<<endl;
cout<<"5> Exit "<<endl;
cout<<"Selects the option the above "<<endl;
cin>>ch;
switch(ch)
{
case 1:
    cout<<"\n1> open account "<<endl;
    obj.Open_account();
    break;
case 2:
    cout<<"2> Deposit money "<<endl;
    obj.Deposit_money();
    break;
case 3:
    cout<<"3> Withdraw money "<<endl;
    obj.withdraw_money();
    break;
case 4:
    cout<<"4> Display account "<<endl;
    obj.Display_account();
    break;
case 5:
    if(ch == 5){
        exit(1);
    }
default:
    cout<<"Please enter right key "<<endl;
}
    }
while(ch!=5);

return 0;
}

