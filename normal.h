#ifndef NORMAL_H
#define NORMAL_H
#include <account.h>
#include <iostream>
#include <QString>


class Normal : public Account
{
    public:
        Normal(QString u_n,QString pass,QString n);
        virtual ~Normal();
        void display();

    protected:

    private:
};


#endif
