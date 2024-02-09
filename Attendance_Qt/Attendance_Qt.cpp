#include "Attendance_Qt.h"
#include "Database_Controller.h"

Attendance_Qt::Attendance_Qt(QWidget* parent) : QMainWindow(parent)
{
    controller = new Database_Controller();
    ui.setupUi(this);
    connect(ui.button_submit, &QPushButton::clicked, this, &Attendance_Qt::onSubmitClicked);
    
}

Attendance_Qt::~Attendance_Qt()
{
    delete controller; // Free allocated memory
}

void Attendance_Qt::onSubmitClicked()
{
    QString name = ui.input_name->text();
    int id = ui.input_id->text().toInt();
}