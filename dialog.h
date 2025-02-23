#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_le_hostName_textChanged(const QString &arg1);

    void on_le_dbName_textChanged(const QString &arg1);

    void on_le_login_textChanged(const QString &arg1);

    void on_le_password_textChanged(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_buttonBox_rejected();

private:
    Ui::Dialog *ui;

    QString hostName;
    QString dbName;
    QString dbLogin;
    QString dbPassword;
    uint port;
};

#endif // DIALOG_H
