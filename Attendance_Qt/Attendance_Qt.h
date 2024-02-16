#ifndef ATTENDANCE_QT_H
#define ATTENDANCE_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_Attendance_Qt.h"
#include "Student_Controller.h"
#include "Student.h"
#include "Attendance_Controller.h"

class Attendance_Qt : public QMainWindow
{
    Q_OBJECT

public:
    Attendance_Qt(QWidget* parent = nullptr);
    ~Attendance_Qt();
    void onSubmitClicked();
    void onReadClicked();
    bool isValidEntries(int id, std::string name);
    void onDateClicked(const QDate &date);

private:
    Ui::Attendance_QtClass ui;
    Attendance_Controller* attendance_controller;
    Student_Controller* student_controller;
    bool isAdmin;
    QDate selected_date;
};

#endif // ATTENDANCE_QT_H
