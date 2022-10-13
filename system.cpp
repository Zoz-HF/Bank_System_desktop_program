#include "system.h"
#include "ui_system.h"


System::System(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::System)
{
    ui->setupUi(this);
}

System::~System()
{
    delete ui;
}


void System::on_pushButton_pay_clicked()
{
     p= new pay_screen(this,1);
     p->show();
}


void System::on_pushButton_borrow_clicked()
{
    p= new pay_screen(this,2);
    p->show();
}


void System::on_pushButton_deposit_clicked()
{
    p= new pay_screen(this,3);
    p->show();
}



void System::on_pushButton_withdraw_clicked()
{
    p= new pay_screen(this,4);
    p->show();
}



void System::on_pushButton_info_clicked()
{

    QMessageBox::about(this,"Your information\n your balance:","fbch");
}

