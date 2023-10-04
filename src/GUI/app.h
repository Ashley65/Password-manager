//
// Created by NIgel work on 04/10/2023.
//

#ifndef PASSWORDMANAGER_APP_H
#define PASSWORDMANAGER_APP_H

#include <QApplication>
#include <QtNetwork/qlocalserver.h>

class QLockFile;



class app : public QApplication
{
    Q_OBJECT

public:
    app(int &argc, char **argv);
    ~app() override;

    bool event(QEvent *event) override;
    bool isAlreadyRunning() const;





};


#endif //PASSWORDMANAGER_APP_H
