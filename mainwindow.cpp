#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    hide();
    s = new System(this);
    s->show();
}


void MainWindow::on_pushButton_signup_clicked()
{
    signup = new SignUp(this);
    signup->show();
}

