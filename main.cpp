#include "textpad.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Textpad w;
    w.show();
    return a.exec();
}
