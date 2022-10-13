#include "normal.h"

Normal::~Normal()
{
}

Normal::Normal(QString u_n,QString pass,QString n):Account("Normal",10000,60)
{
    indebet=0;
    balance=0;
    status=false;
    user_name=u_n;
    password=pass;
    name=n;
};


void Normal::display()
{

}



