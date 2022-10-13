#include "pay_screen.h"
#include "ui_pay_screen.h"
#include <QMessageBox>
#include <QValidator>
#include <account.h>

pay_screen::pay_screen(QWidget *parent,int a) :
    QDialog(parent),
    ui(new Ui::pay_screen)
{
    ui->setupUi(this);
    ui->lineEdit_pay->setValidator(new QIntValidator(0,50000));
}

pay_screen::~pay_screen()
{
    delete ui;
}

void pay_screen::on_pushButton_confirm_clicked()
{
if(ui->lineEdit_pay->text().isEmpty())
{
    QMessageBox::warning(this,"warning","Please,Enter a number");
}
else
{
    switch (pay_screen::a) {
    case 1:
       // accs[0].pay_cridet(ui->lineEdit_pay->text().toDouble());
        break;

    case 2:
       // accs[0].borrow(ui->lineEdit_pay->text().toDouble());
        break;

    case 3:
       // accs[0].deposit(ui->lineEdit_pay->text().toDouble());
        break;

    case 4:
       // accs[0].get_money(ui->lineEdit_pay->text().toDouble());
        break;

    }

 hide();

}


}

