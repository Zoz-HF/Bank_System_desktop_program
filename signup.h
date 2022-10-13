#ifndef SIGNUP_H
#define SIGNUP_H
#include "system.h"
#include <QDialog>

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_pushButton_submit_clicked();

private:
    Ui::SignUp *ui;
    System *sy;
};

#endif // SIGNUP_H
