#include "Attendance_Qt.h"
Attendance_Qt::Attendance_Qt(QWidget* parent) : QMainWindow(parent)
{
    student_controller = new Student_Controller();
    attendance_controller = new Attendance_Controller();
    ui.setupUi(this);
    connect(ui.button_submit, &QPushButton::clicked, this, &Attendance_Qt::onSubmitClicked);
    connect(ui.button_read, &QPushButton::clicked, this, &Attendance_Qt::onReadClicked);
    connect(ui.calendarWidget, &QCalendarWidget::clicked, this, &Attendance_Qt::onDateClicked);
    isAdmin = false;
    selected_date = QDate::currentDate();
}

void Attendance_Qt::onDateClicked(const QDate &date)
{
    
}

Attendance_Qt::~Attendance_Qt()
{
    delete this->student_controller; // Free allocated memory
}

void Attendance_Qt::onSubmitClicked()
{
    QString name = ui.input_name->text();
    int id = ui.input_id->text().toInt();
    if (isValidEntries(id, name.toStdString()))
    {
        if (student_controller->isInTable(id, name.toStdString()))
        {
            attendance_controller->addAttendance(id, name.toStdString());
        }
        else
        {
            qDebug() << "Wong";
        }
    }
    else
    {
        qDebug("Entries are not valid. ID is not 9 digit or NAME is empty.");
    }
}

void Attendance_Qt::onReadClicked()
{
    student_controller->readTable();
}

bool Attendance_Qt::isValidEntries(int id, std::string name)
{
    std::string id_string = std::to_string(id);
    if (id_string.size() == 9 && !name.empty())
    {
        return true;
    }
    return false;
}