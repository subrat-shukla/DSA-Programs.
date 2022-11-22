#include<iostream>
using namespace std;

int list();
void deposit();
void transfer();
void withdraw();
void checkbalance();
int exit();

int total_amt,dept_amt,wtd_amt,trns_amt;
int main()
{
     
    cout<<"Enter your total amount first : ";
    cin>>total_amt;
    
    int ch;
    do
    {
        ch=list();

        switch (ch)
        {
        case 1 : deposit();
                break;

        case 2 : withdraw();
                break;

        case 3 : transfer();
                break;
        
        case 4 : checkbalance();
                break;

        case 5 : exit();
                break;
        
        default:
            cout<<"Wrong Command Entered...";
            break;
        }
    } while (ch!=5);
}

int list()
{
    int ch;
    cout<<"1. Deposit Amount :"<<endl;
    cout<<"2. Withdraw Amount :"<<endl;
    cout<<"3. Transfer Amount :"<<endl;
    cout<<"4. CheckBalance :"<<endl;
    cout<<"5. Exit :"<<endl;
    cout<<"Enter Choice : "<<endl;
    cin>>ch;
    return(ch);
}

void deposit()
{
    cout<<"Enter amount you want to deposit :"<<endl;
    cin>>dept_amt;
    total_amt+=dept_amt;
    cout<<"Balance is : "<<total_amt<<endl;
}

void withdraw()
{
    cout<<"Enter amount you want to withdraw :"<<endl;
    cin>>wtd_amt;
    if(wtd_amt<=total_amt){
    total_amt-=wtd_amt;
    cout<<"Balance is : "<<total_amt<<endl;
    }
    else{
        cout<<"Balance low."<<endl;
    }
}

void transfer()
{
    cout<<"Enter amount you want to transfer :"<<endl;
    cin>>trns_amt;
    if(trns_amt<=total_amt){
    total_amt-=trns_amt;
    cout<<"Balance is : "<<total_amt<<endl;
    }
    else{
        cout<<"Balance low."<<endl;
    }
}

void checkbalance()
{
    cout<<"Your Bank Balance is : "<<total_amt<<endl;
}

int exit()
{
    return 0;
}
