#ifndef VIP_H
#define VIP_H
#include <account.h>
#include <iostream>
#include <QString>


class Vip : public Account
{
    public:
        Vip(QString u_n,QString pass,QString n);
        virtual ~Vip();
        void display();

    protected:

    private:
};

#endif
