#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void on_itemListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
