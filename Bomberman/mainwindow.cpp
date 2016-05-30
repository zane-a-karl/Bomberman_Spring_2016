#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVBoxLayout* start_layout = new QVBoxLayout;
        QLabel* welcome = new QLabel("Welcome to Bomberman!");
            start_layout->addWidget(welcome,0,Qt::AlignCenter);

        QHBoxLayout* start_buttons = new QHBoxLayout;
            start_layout->addLayout(start_buttons);

            QVBoxLayout* levels = new QVBoxLayout;
                start_buttons->addLayout(levels);

                QLabel* levels_of_difficulty = new QLabel("Levels of Difficulty");
                    levels->addWidget(levels_of_difficulty);
                QPushButton* easy = new QPushButton;
                   QObject::connect(easy, SIGNAL(clicked()), this, SLOT(easy_game_begin()));
                   levels->addWidget(easy);
                QPushButton* medium = new QPushButton;
                    QObject::connect(medium, SIGNAL(clicked()), this, SLOT(medium_game_begin()));
                    levels->addWidget(medium);
                QPushButton* hard = new QPushButton();
                    QObject::connect(hard, SIGNAL(clicked()), this, SLOT(hard_game_begin()));
                    levels->addWidget(hard);

           QVBoxLayout* colors = new QVBoxLayout();
                start_buttons->addLayout(colors);

                QLabel* colors_of_background = new QLabel("Pick your favorite backgorund color!");
                    colors->addWidget(colors_of_background);
                QRadioButton* red = new QRadioButton("RED");
                    colors->addWidget(red);
                QRadioButton* green = new QRadioButton("GREEN");
                    colors->addWidget(green);
                QRadioButton* blue = new QRadioButton("BLUE");
                    colors->addWidget(blue);

           QVBoxLayout* pieces = new QVBoxLayout();
                start_buttons->addLayout(pieces);

                QLabel* game_pieces= new QLabel("Pick your favorite bomberman!!");
                    pieces->addWidget(game_pieces);
                QRadioButton* bm1 = new QRadioButton("#1");
                    pieces->addWidget(bm1);
                QRadioButton* bm2 = new QRadioButton("#2");
                    pieces->addWidget(bm2);
                QRadioButton* bm3 = new QRadioButton("#3");
                    pieces->addWidget(bm3);

       QWidget* main_window = new QWidget;
       main_window->setLayout(start_layout);
       this->setCentralWidget(main_window);


}
/**
 * @brief easy_game_begin
 */
void MainWindow::easy_game_begin(){
    board = new Gameboard(this);
    this->setCentralWidget(board);
}
/**
 * @brief medium_game_begin
 */
void MainWindow::medium_game_begin(){
    board = new Gameboard(this);
    this->setCentralWidget(board);
}

/**
 * @brief hard_game_begin
 */
void MainWindow::hard_game_begin(){
    board = new Gameboard(this);
    this->setCentralWidget(board);
}

/**
 * @brief game_over
 */
void MainWindow::game_over(){
    // Take the current board game out of the central widget of MainWindow
       QWidget* wid = this->centralWidget();
       wid->setParent(nullptr);
       // Line above will delete the widget gracefully (no memory errors)

       // Display something which says that you lost, maybe display high score.

       // Reset the MainWindow with the initial startup screen
       ui->setupUi(this);
}

/**
 * @brief MainWindow::~MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}
