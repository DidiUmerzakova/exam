#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "QTime"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::on_itemListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
}

