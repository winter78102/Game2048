#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public  slots:
    void MoveLeft();
    void MoveRight();
    void MoveUp();
    void MoveDown();

private:
    Ui::MainWindow *ui;
  Game* _Game = nullptr;
};
#endif // MAINWINDOW_H
