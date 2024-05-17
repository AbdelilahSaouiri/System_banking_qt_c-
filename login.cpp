#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <menu.h>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

void login::on_pushButton_2_clicked()
{

}

login::~login()
{
    delete ui;
}

//verifier la connection de la base de données

bool login::login_conn(){
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Bank-System/logindata.db");
    if(mydb.open()){
        return true;
    }
    else{
        return false;
    }
}

//Login Database Disconnect

void login::login_disconn(){
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

//Login Push Button

void login::on_login_push_clicked()
{
    if(ui->login_userid->text().isEmpty() || ui->login_password->text().isEmpty()){
        QMessageBox::warning(this, "Login Error", "tous les champs sont obligatoires");
        return;
    }

    if(!login_conn()) {
        QMessageBox::critical(this, "Database Error", "Unable to connect to the database");
        return;
    }

    QSqlQuery query;
    QString username = ui->login_userid->text();
    QString password = ui->login_password->text();
    query.prepare("SELECT * FROM login WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if(query.exec() && query.next()){
        menu *win = new menu;
        this->hide();
        win->show();
    }
    else{
        QMessageBox::information(this, "Login", "Erreur Dans Le Mot De Passe ou Le Nom d'utilisateur ");
    }

    login_disconn();
}


void login::on_login_userid_returnPressed()
{
    login::on_login_push_clicked();
}

void login::on_login_password_returnPressed()
{
    login::on_login_push_clicked();
}



