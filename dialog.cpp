#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    port = 0;
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_le_hostName_textChanged(const QString &arg1)
{
    hostName = arg1;
    qDebug() << "set hostName = " << hostName;
}


void Dialog::on_le_dbName_textChanged(const QString &arg1)
{
    dbName = arg1;
    qDebug() << "set dbName = " << dbName;
}


void Dialog::on_le_login_textChanged(const QString &arg1)
{
    dbLogin = arg1;
    qDebug() << "set dbLogin = " << dbLogin;
}


void Dialog::on_le_password_textChanged(const QString &arg1)
{
    dbPassword = arg1;
    qDebug() << "set dbPassword = " << dbPassword;
}


void Dialog::on_spinBox_valueChanged(int arg1)
{
    port = arg1;
    qDebug() << "set port = " << port;
}



void Dialog::on_buttonBox_rejected()
{
    hostName = 0;
    dbName = 0;
    dbLogin = 0;
    dbPassword = 0;
    port = 0;
    qDebug() << "reset";
}

