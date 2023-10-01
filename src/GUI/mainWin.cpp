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



const QString mainWin::BaseWindowTitle = "Password Manager";

mainWin* mainWin::instance = nullptr;