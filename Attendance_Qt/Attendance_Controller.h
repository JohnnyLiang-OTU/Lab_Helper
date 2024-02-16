#pragma once
#include <libpq-fe.h>
#include <qdebug.h>
class Attendance_Controller
{
private:
public:
	Attendance_Controller();
	~Attendance_Controller();
	void addAttendance(int id, std::string name);
};

