#include "mainwindow.h"

#include <QApplication>
#include "PPTWindow.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    PPTWindow window;
    window.show();

    return app.exec();
}
