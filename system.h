#ifndef SYSTEM_H
#define SYSTEM_H
#include "pay_screen.h"
#include <QDialog>
#include <QMessageBox>
#include "account.h"
#include <vector>

namespace Ui {
class System;
}

class System : public QDialog
{
    Q_OBJECT

public:
    explicit System(QWidget *parent = nullptr);
    ~System();
    int flag;

private slots:

    void on_pushButton_pay_clicked();

    void on_pushButton_borrow_clicked();

    void on_pushButton_deposit_clicked();

    void on_pushButton_withdraw_clicked();

    void on_pushButton_info_clicked();

private:
    Ui::System *ui;
    pay_screen *p;
};

#endif // SYSTEM_H
