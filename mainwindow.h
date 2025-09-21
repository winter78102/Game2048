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
    void DefineCells();

private:
    Ui::MainWindow *ui;
    Game  _Game;
    std::vector<std::vector< int> > _Grid;
};
#endif // MAINWINDOW_H
