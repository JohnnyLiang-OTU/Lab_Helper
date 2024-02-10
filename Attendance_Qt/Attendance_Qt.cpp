#include "Attendance_Qt.h"
#include "Student_Controller.h";

Attendance_Qt::Attendance_Qt(QWidget* parent) : QMainWindow(parent)
{
    student_controller = new Student_Controller();
    ui.setupUi(this);
    connect(ui.button_submit, &QPushButton::clicked, this, &Attendance_Qt::onSubmitClicked);
    
}

Attendance_Qt::~Attendance_Qt()
{
    delete this->student_controller; // Free allocated memory
}

void Attendance_Qt::onSubmitClicked()
{
    QString name = ui.input_name->text();
    int id = ui.input_id->text().toInt();
    bool exists = student_controller->isInTable(name.toStdString(), id);
    if (exists)
    {

    }
    else
    {
        student_controller->addStudent();
    }
}