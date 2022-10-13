#include "account.h"
#include <iostream>
#include <QString>
#include <sstream>
using namespace std;

int Account::no_of_acc=0;
vector <Account> Account::accs={};
Account::Account(QString ac,double l,int du)
{
    accs.push_back(*this);
    account_type=ac;
    cridet_limit=l;
    duration=du;
    no_of_acc++;
    id=no_of_acc;
}


Account::~Account()
{}

void Account::deposit(double b)
{
    if (b>0)
        balance += b;
    else
        cout<<"Error, please enter positive number ";
};



void Account::get_money(double m)
{

    if (balance>m && m>0)
        balance -= m;

    else
        cout<<"Not allowed"<<endl;
};



void Account::borrow(double b)
{
    if((cridet_limit-indebet)>=b)
    {

        if(indebet==0)
        {
            date_of_borrow=time(0);
            date_of_payment= date_of_borrow+duration*24*60*60;
        }
        indebet += b;
    }
};



void Account::pay_cridet(double p)
{
    if(p<=indebet) indebet -= p;

    if(indebet==0)
    {
        status=false;
        current_indebet_duration=duration;
    }
};


void Account::transfer(int id,double amount) {};

void Account::display()
{

};

void Account::check_status()
{

    time_t now = time(0);
    current_indebet_duration=difftime(date_of_payment,now);

    if(current_indebet_duration<0)
        status=true;
};

void Account::increament()
{

    check_status();
    if(current_indebet_duration<0)
    {
        if (indebet>0)
        {
            indebet *=1.12;
        }
        date_of_payment += 2592000;

    }
}

char* Account::get_date_of_borrow()
{
    return ctime(&date_of_borrow);
};

char* Account::get_date_of_payment()
{
    return ctime(&date_of_payment);
};

QString Account::get_user_name()
{
    return user_name;
};
QString Account::get_password()
{
    return password;
};
QString Account::get_name()
{
    return name;
};

void Account::set_user_name(QString u_n)
{
    user_name=u_n;
};

void Account::set_password(QString p)
{
    password=p;
};

void Account::set_name(QString n)
{
    name=n;
};

QString Account::get_account_type()
{
    return account_type;
};

int Account::get_id()
{
    return id;
};

QString Account::get_current_indebet_duration()
{
    check_status();
    long a= (long) current_indebet_duration;
    a /= 86400;
    //QString st= to_string(a);
    //st += " days left to pay";
    //return st;
    return "zz";
};

QString Account::get_status()
{
    if(status)
        return "You are in debt";
    else
        return "You are not indebted";

};

double Account::get_balance()
{
    return balance;
};

double Account::get_cridet_limit()
{
    return cridet_limit-indebet;
};
double Account::get_indebet()
{
    return indebet;
};

