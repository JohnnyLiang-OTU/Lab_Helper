#include "Student_Controller.h"

Student_Controller::Student_Controller(){}
Student_Controller::~Student_Controller(){}
bool Student_Controller::connection_success(PGconn* conn)
{
	if (PQstatus(conn) != CONNECTION_OK)
	{
		qDebug() << "Connection to the database failed: " << PQerrorMessage(conn);
		PQfinish(conn);
		return false;
	}
	return true;
}
void Student_Controller::addStudent(std::string name, int id, std::string date)
{
	PGconn* conn = PQconnectdb("host=localhost dbname=Attendance_DB user=postgres password=1111");
	//PGconn* conn = PQconnectdb("host=localhost dbname=postgres user=postgres password=1111"); // For dekstop
	if (connection_success(conn) == false) { PQfinish(conn); }
	PQfinish(conn);
}
void Student_Controller::editStudent()
{

}
void Student_Controller::deleteStudent()
{

}

bool Student_Controller::isInTable(int id, std::string name)
{
	//PGconn* conn = PQconnectdb("host=localhost dbname=postgres user=postgres password=1111"); 
	PGconn* conn = PQconnectdb("host=localhost dbname=Attendance_DB user=postgres password=1111");
	if (connection_success(conn) == false)
	{
		return false;
	}
	const std::string querys = "SELECT COUNT(*) FROM Student WHERE student_name LIKE '%" + name + "%' AND id = " + std::to_string(id);
	//const std::string querys = "SELECT COUNT(*) FROM Student"; 
	PGresult* result = PQexec(conn, querys.c_str());

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
			qDebug() << "Value found in the table!";
		}
		else {
			qDebug() << "Value not found in the table.";
		}
	}
	PQclear(result);
	PQfinish(conn);

	return true;

}

void Student_Controller::readTable()
{
	//PGconn* conn = PQconnectdb("host=localhost dbname=postgres user=postgres password=1111"); // For Desktop
	PGconn* conn = PQconnectdb("host=localhost dbname=Attendance_DB user=postgres password=1111");
	if (connection_success(conn) == false)
	{
		qDebug() << "Connection Failed: " << PQerrorMessage(conn);
	}
	const std::string query = "SELECT * FROM student";
	PGresult* result = PQexec(conn, query.c_str());

	if (PQresultStatus(result) != PGRES_TUPLES_OK)
	{
		qDebug() << "Error when executing query: " << PQerrorMessage(conn);
		PQclear(result);
		PQfinish(conn);
	}

	int numRows = PQntuples(result);
	int numFields = PQnfields(result);

	for (int i = 0; i < numRows; ++i) {
		for (int j = 0; j < numFields; ++j) {
			qDebug() << PQgetvalue(result, i, j) << " ";
		}
		qDebug() << "\n";
	}
	PQclear(result);
	PQfinish(conn);
}
