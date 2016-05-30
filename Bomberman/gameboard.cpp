#include "gameboard.h"
#include "ui_gameboard.h"

#include <QPushButton>
#include <QVBoxLayout>

/**
 * @brief Gameboard::Gameboard
 * @param parent
 */
Gameboard::Gameboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gameboard)
{
    ui->setupUi(this);
    QVBoxLayout* lay = new QVBoxLayout;
    QPushButton* btn = new QPushButton("Hey");
    QPushButton* btn1 = new QPushButton("stuff");

    lay->addWidget(btn);
    lay->addWidget(btn1);
    this->setLayout(lay);

}

/**
 * @brief Gameboard::~Gameboard
 */
Gameboard::~Gameboard()
{
    delete ui;
}
