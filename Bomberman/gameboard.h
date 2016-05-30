#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QWidget>
#include <QMainWindow>
#include <QKeyEvent>
#include <QLabel>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <random>
#include <chrono>
#include <QTimer>

#include <iostream>

/**
 *
 */
namespace Ui {
class Gameboard;
}

/**
 * @brief The Gameboard class
 */
class Gameboard : public QWidget
{
    Q_OBJECT

signals:
    void easy_game_begin();
    void medium_game_begin();
    void hard_game_begin();
    void game_over();

public:
    explicit Gameboard(QWidget *parent = 0);
    ~Gameboard();

    void keyPressEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *e);
    void showEvent(QShowEvent *e);

private:
    Ui::Gameboard *ui;
};

#endif // GAMEBOARD_H
