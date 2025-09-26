#include <Mainwindow/mainwindow.h>
#include "ui_mainwindow.h"
#include <QString>
#include <QShortcut>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _Game.StartPlay();
    _Grid=_Game.GetUpdatedBoard();
    DefineCells();
    connect(ui->Left,  &QToolButton::clicked, this, &MainWindow::MoveLeft);
    connect(ui->Right, &QToolButton::clicked, this, &MainWindow::MoveRight);
    connect(ui->UP,    &QToolButton::clicked, this, &MainWindow::MoveUp);
    connect(ui->Down,  &QToolButton::clicked, this, &MainWindow::MoveDown);


    QShortcut *shortcutLeft  = new QShortcut(QKeySequence(Qt::Key_Left), this);
    connect(shortcutLeft,  &QShortcut::activated, this, &MainWindow::MoveLeft);

    QShortcut *shortcutRight = new QShortcut(QKeySequence(Qt::Key_Right), this);
    connect(shortcutRight, &QShortcut::activated, this, &MainWindow::MoveRight);

    QShortcut *shortcutUp    = new QShortcut(QKeySequence(Qt::Key_Up), this);
    connect(shortcutUp,    &QShortcut::activated, this, &MainWindow::MoveUp);

    QShortcut *shortcutDown  = new QShortcut(QKeySequence(Qt::Key_Down), this);
    connect(shortcutDown,  &QShortcut::activated, this, &MainWindow::MoveDown);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::MoveLeft(){
    _Game.Left();
    _Grid=_Game.GetUpdatedBoard();
    DefineCells();
}
void MainWindow::MoveDown(){
    _Game.Down();
    _Grid=_Game.GetUpdatedBoard();
    DefineCells();
}
void MainWindow::MoveUp(){
    _Game.Up();
    _Grid=_Game.GetUpdatedBoard();
     DefineCells();
}
void MainWindow::MoveRight(){
    _Game.Right();
    _Grid=_Game.GetUpdatedBoard();
     DefineCells();
}
void MainWindow::DefineCells(){
    ui->cell00->setText(QString::number(_Grid[0][0]));
    ui->cell01->setText(QString::number(_Grid[0][1]));
    ui->cell02->setText(QString::number(_Grid[0][2]));
    ui->cell03->setText(QString::number(_Grid[0][3]));
    ui->cell10->setText(QString::number(_Grid[1][0]));
    ui->cell11->setText(QString::number(_Grid[1][1]));
    ui->cell12->setText(QString::number(_Grid[1][2]));
    ui->cell13->setText(QString::number(_Grid[1][3]));
    ui->cell20->setText(QString::number(_Grid[2][0]));
    ui->cell21->setText(QString::number(_Grid[2][1]));
    ui->cell22->setText(QString::number(_Grid[2][2]));
    ui->cell23->setText(QString::number(_Grid[2][3]));
    ui->cell30->setText(QString::number(_Grid[3][0]));
    ui->cell31->setText(QString::number(_Grid[3][1]));
    ui->cell32->setText(QString::number(_Grid[3][2]));
    ui->cell33->setText(QString::number(_Grid[3][3]));
}
