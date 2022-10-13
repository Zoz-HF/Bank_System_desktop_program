#include "signup.h"
#include "ui_signup.h"

#include "account.h"
#include "vip.h"
#include "normal.h"
SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_submit_clicked()
{
    if(ui->lineEdit_confirm_password->text()==ui->lineEdit_password->text())
    {
if(ui->radioButton_normal->isChecked())
{
    Normal n = Normal(ui->lineEdit_name->text(),ui->lineEdit_username->text(),ui->lineEdit_password->text());
    hide();
    sy =new System(this);
    sy->show();
}
  else if  (ui->radioButton_vip->isChecked()) {
    Vip v = Vip(ui->lineEdit_name->text(),ui->lineEdit_username->text(),ui->lineEdit_password->text());
    hide();
    sy =new System(this);
    sy->show();
}
else {ui->label_errors->setText("You must choose your account type");}

    }

    else {ui->label_errors->setText("Passwords are not the same");}
}

