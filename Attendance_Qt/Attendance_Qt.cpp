#include "Attendance_Qt.h"
#include "Database_Controller.h"

Attendance_Qt::Attendance_Qt(QWidget* parent) : QMainWindow(parent)
{
    controller = new Database_Controller();
    ui.setupUi(this);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &Attendance_Qt::onPushButton2Clicked);
    connect(ui.pushButton, &QPushButton::clicked, this, &Attendance_Qt::onPushButtonClicked);
}

Attendance_Qt::~Attendance_Qt()
{
    delete controller; // Free allocated memory
}

void Attendance_Qt::onPushButton2Clicked()
{
    qDebug();
    controller->setConnection();
}

void Attendance_Qt::onPushButtonClicked()
{

}
