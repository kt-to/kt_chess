#include <QApplication>
#include <QFile>
#include <QLabel>
#include "kt_main_window.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QFile test("../test.png");
    test.open(QIODevice::ReadOnly);
    QByteArray byteArray = test.readAll();
    test.close();

    QPixmap pixmap;
    pixmap.loadFromData(byteArray);

    QLabel label;
    label.setPixmap(pixmap);
    label.show();

    return app.exec();
}
