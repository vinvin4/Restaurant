#ifndef INTERFACE_WORKER
#define INTERFACE_WORKER
#include <string>
#include "Cash.h"
#include <time.h>
#include "Collection.h"
/**
Interface for all workers in the restaurant
*/
class Worker
{
private:
	bool nervous = false;
	bool talkative = false;
	int salary;	
	std::string name;

public:	
	~Worker();
	/*
	Different kinds of character, that influence on working procees
	*/
	bool getNervous();
	void setNervous(bool);

	bool getTalkative();
	void setTalkative(bool);

	int getSalary();
	void setSalary(int);

	std::string getName();
	void setName(std::string);

	virtual void working(int) = 0; // Working procees. All types of workers will work different
};

#endif