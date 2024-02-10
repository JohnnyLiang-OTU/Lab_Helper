#pragma once
#include <iostream>
#include "libpq-fe.h"
#include <qdebug.h>
class Database_Controller
{
public:
	Database_Controller();
	~Database_Controller();
	void setConnection();
	void addToTable();
	void deleteFromTable();


private:
};

