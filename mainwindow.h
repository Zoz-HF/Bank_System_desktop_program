#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "system.h"
#include "signup.h"
#include <QMainWindow>
#include "account.h"
#include "normal.h"
#include "vip.h"
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_pushButton_login_clicked();

    void on_pushButton_signup_clicked();

private:
    Ui::MainWindow *ui;
    System *s;
    SignUp *signup;
};
#endif // MAINWINDOW_H
