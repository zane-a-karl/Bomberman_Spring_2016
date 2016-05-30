#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gameboard.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void easy_game_begin();
    void medium_game_begin();
    void hard_game_begin();

    void game_over();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Gameboard* board;
};

#endif // MAINWINDOW_H
