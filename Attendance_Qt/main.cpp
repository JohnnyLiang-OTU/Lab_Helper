#include "Attendance_Qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Attendance_Qt w;
    w.show();
    return a.exec();
}
