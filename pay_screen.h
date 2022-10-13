#ifndef PAY_SCREEN_H
#define PAY_SCREEN_H
#include "account.h"
#include <vector>
#include <QDialog>

namespace Ui {
class pay_screen;
}

class pay_screen : public QDialog
{
    Q_OBJECT

public:
    explicit pay_screen(QWidget *parent = nullptr,int a=0);
    ~pay_screen();
     int a;

private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::pay_screen *ui;

};

#endif // PAY_SCREEN_H
