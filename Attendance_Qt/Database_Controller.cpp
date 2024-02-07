#include "Database_Controller.h"
#include <iostream>
#include "libpq-fe.h"
#include <qdebug.h>
Database_Controller::Database_Controller(){};
Database_Controller::~Database_Controller() {};

void Database_Controller::setConnection()
{
	PGconn* conn = PQconnectdb("host=localhost dbname=postgres user=postgres password=1111");
	if (PQstatus(conn) != CONNECTION_OK)
	{
		qDebug() << "Error connecting to the database." << PQerrorMessage(conn);
		PQfinish(conn);
	}
	else
	{
		PGresult* result = PQexec(conn, "SELECT * FROM Student");

		if (PQresultStatus(result) != PGRES_TUPLES_OK) {

			qDebug() << "Query Error";

			PQclear(result);

			PQfinish(conn);

		}

		int numRows = PQntuples(result);

		int numColumns = PQnfields(result);

		for (int i = 0; i < numRows; ++i) {

			for (int j = 0; j < numColumns; ++j) {

				qDebug() << PQgetvalue(result, i, j) << "\t";

			}

			//std::cout << std::endl;

		}

		PQclear(result);

		PQfinish(conn);
	}

}
