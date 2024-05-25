#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget->setRange(95, 105);
    ui->widget->setStep(0.1);
}

MainWindow::~MainWindow()
{
    delete ui;
}
