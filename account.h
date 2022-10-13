#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <QString>
#include <ctime>
#include <sstream>
#include <vector>

using namespace std;

class Account
{
public:
    Account(QString ac,double l,int duration);
    virtual ~Account();
    void deposit(double b);
    void get_money(double m);
    void borrow(double b);
    void pay_cridet(double p);
    void check_status();
    void transfer(int id,double amount);
    virtual void display();
    void increament();
    char* get_date_of_borrow();
    char* get_date_of_payment();
    QString get_user_name();
    QString get_password();
    QString get_name();
    void set_user_name(QString u_n);
    void set_password(QString p);
    void set_name(QString n);
    QString get_account_type();
    int get_id();
    QString get_current_indebet_duration();
    QString get_status();
    double get_balance();
    double get_cridet_limit();
    double get_indebet();
    static vector <Account> accs;


protected:
    time_t date_of_borrow,date_of_payment;
    static int no_of_acc;
    QString user_name,password,name,account_type;
    int id,duration;
    bool status;
    double balance,cridet_limit,indebet,current_indebet_duration;

private:

};

#endif

