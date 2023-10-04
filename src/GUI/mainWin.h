//
// Created by NIgel work on 01/10/2023.
//

#ifndef PASSWORDMANAGER_MAINWIN_H
#define PASSWORDMANAGER_MAINWIN_H

#include <QActionGroup>
#include <QLabel>
#include <QMainWindow>
#include <QProgressBar>
#include <QSystemTrayIcon>

namespace Ui {
    class mainWin;
}

class mainWin : public QMainWindow {
Q_OBJECT

public:
    mainWin();

    ~mainWin();

    void restoreWindowState();

    void setAllowSessionManager(bool allow);

private:
    Ui::mainWin *ui;

};
#endif //PASSWORDMANAGER_MAINWIN_H
