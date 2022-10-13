#include "vip.h"

Vip::Vip(QString u_n,QString pass,QString n):Account("VIP",20000,180)
{
    indebet=0;
    balance=0;
    status=false;
    user_name=u_n;
    password=pass;
    name=n;
}

Vip::~Vip()
{

}

void Vip::display()
{

}


