#ifndef ATTENDANCE_QT_H
#define ATTENDANCE_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_Attendance_Qt.h"
#include "Database_Controller.h"

class Attendance_Qt : public QMainWindow
{
    Q_OBJECT

public:
    Attendance_Qt(QWidget* parent = nullptr);
    ~Attendance_Qt();
    void onPushButton2Clicked();
    void onPushButtonClicked();

private:
    Ui::Attendance_QtClass ui;
    Database_Controller* controller;
};

#endif // ATTENDANCE_QT_H
