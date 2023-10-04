//
// Created by NIgel work on 01/10/2023.
//

#include "mainWin.h"
#include "ui_mainWin.h"

// Qt includes
#include <QCloseEvent>
#include <QDesktopServices>
#include <QDir>
#include <QFileInfo>
#include <QList>
#include <QMimeData>
#include <QShortcut>
#include <QStatusBar>
#include <QTimer>
#include <QToolButton>
#include <QWindow>

// Local includes



mainWin::mainWin(const QString &searchText, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::mainWin)
{
    ui -> setupUi(this);
}
mainWin::~mainWin()
{
    delete ui;
}