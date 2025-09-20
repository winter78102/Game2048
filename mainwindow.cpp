#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _Game->StartPlay();
    connect(ui->Left,  &QToolButton::clicked, this, &MainWindow::MoveLeft);
    connect(ui->Right, &QToolButton::clicked, this, &MainWindow::MoveRight);
    connect(ui->UP,    &QToolButton::clicked, this, &MainWindow::MoveUp);
    connect(ui->Down, &QToolButton::clicked, this, &MainWindow::MoveDown);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::MoveLeft(){
    _Game->Left();
}
void MainWindow::MoveDown(){
    _Game->Down();
}
void MainWindow::MoveUp(){
    _Game->Up();
}
void MainWindow::MoveRight(){
    _Game->Right();
}
