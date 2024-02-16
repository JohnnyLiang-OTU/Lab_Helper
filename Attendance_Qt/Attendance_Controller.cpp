#include "Attendance_Controller.h"

Attendance_Controller::Attendance_Controller(){}
Attendance_Controller::~Attendance_Controller(){}
void Attendance_Controller::addAttendance(int id, std::string name)
{
	PGconn* conn = PQconnectdb("host=localhost dbname=Attendance_DB user=postgres password=1111");
	if (PQstatus(conn) != CONNECTION_OK)
	{
		qDebug() << "Connection to the database failed: " << PQerrorMessage(conn);
		PQfinish(conn);
	}
	const std::string query_for_student_id = "SELECT id FROM student WHERE student_name = '" + name + "' AND id = " + std::to_string(id); // Add query 
	PGresult* result = PQexec(conn, query_for_student_id.c_str());
	if (PQresultStatus(result) != PGRES_TUPLES_OK)
	{
		qDebug() << "Error when executing query " << PQerrorMessage(conn);
		PQclear(result);
		PQfinish(conn);
		return;
	}
	int student_id = atoi(PQgetvalue(result, 0, 0));
	//qDebug() << "ID: " + std::to_string(student_id);



}