#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gridboard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(new GridBoard());
}

MainWindow::~MainWindow()
{
    delete ui;
}
