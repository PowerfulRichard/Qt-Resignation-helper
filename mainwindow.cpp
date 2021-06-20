#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_yesBtn_clicked()
{
    QMessageBox::about(NULL, "提示", "成功同意辞职");
}


void MainWindow::on_noBtn_clicked()
{
    unsigned short xx=QRandomGenerator::global()->bounded(500),yy=QRandomGenerator::global()->bounded(300);

    while((xx<=180+171&&xx>=105)||(yy<=90+121&&yy>=70)){
        xx=QRandomGenerator::global()->bounded(500);
        yy=QRandomGenerator::global()->bounded(300);
    }
    ui->noBtn->setGeometry(xx,yy,75,23);
    QMessageBox::critical(NULL, "警告", "再给你一次机会");
}

