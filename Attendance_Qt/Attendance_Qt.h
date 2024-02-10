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

private slots:
    void onSubmitClicked();

private:
    Ui::Attendance_QtClass ui;
    Student_Controller* student_controller;
    bool isAdmin;
};

#endif // ATTENDANCE_QT_H
