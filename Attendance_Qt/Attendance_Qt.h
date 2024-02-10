#ifndef ATTENDANCE_QT_H
#define ATTENDANCE_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_Attendance_Qt.h"
#include "Student_Controller.h"
#include "Student.h"

class Attendance_Qt : public QMainWindow
{
    Q_OBJECT

public:
    Attendance_Qt(QWidget* parent = nullptr);
    ~Attendance_Qt();
    void onSubmitClicked();
    void onReadClicked();

private:
    Ui::Attendance_QtClass ui;
    Student_Controller* student_controller;
    bool isAdmin;
};

#endif // ATTENDANCE_QT_H
