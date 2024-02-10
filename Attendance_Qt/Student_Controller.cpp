#include "Student_Controller.h"

Student_Controller::Student_Controller(){}
Student_Controller::~Student_Controller(){}
void addStudent(std::string name, int id, std::string date);
{
	PGconn* conn = PQconnectdb("host=localhost dbname=Attendance_DB user=postgres password=1111");
	if (PQstatus(conn) != CONNECTION_OK)
	{
		qDebug() << "Connection to the database failed: " << PQerrorMessage(conn);
		PQfinish(conn);
		return false;
	}
}
void editStudent()
{

}
void deleteStudent()
{

}
bool isInTable(std::string name, int id)
{
	PGconn* conn = PQconnectdb("host=localhost dbname=Attendance_DB user=postgres password=1111");
	if (PQstatus(conn) != CONNECTION_OK)
	{
		qDebug() << "Connection to the database failed: " << PQerrorMessage(conn);
		PQfinish(conn);
		return false;
	}
	const std::string querys = "SELECT COUNT(*) FROM Student WHERE student_name LIKE '%" + name + "%' AND id = " + std::to_string(id);
	char* query = strcpy(query, querys.c_str());
	PGresult* result = PQexec(conn, query);

	if (PQresultStatus(result) != PGRES_TUPLES_OK)
	{
		qDebug() << "Error when executing query: " << PQerrorMessage(conn);
		PQclear(result);
		PQfinish(conn);
		return false;
	}

	int rows = PQntuples(result);
	if (rows > 0) {
		int count = std::stoi(PQgetvalue(result, 0, 0));
		if (count > 0) {
			std::cout << "Value found in the table!" << std::endl;
		}
		else {
			std::cout << "Value not found in the table." << std::endl;
		}
	}
	PQclear(result);
	PQfinish(conn);

	return true;

}