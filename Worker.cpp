#include "Worker.h"
using namespace std;

bool Worker::getNervous()
{
	return nervous;
}
void Worker::setNervous(bool nerv)
{
	this->nervous = nerv;
}

bool Worker::getTalkative()
{
	return talkative;
}
void Worker::setTalkative(bool talk)
{
	this->talkative = talk;
}
void Worker::setSalary(int sal)
{
	this->salary = sal;
}
int Worker::getSalary()
{
	return salary;
}

void Worker::setName(std::string name)
{
	this->name = name;
}
std::string Worker::getName()
{
	return name;
}
Worker::~Worker()
{
}
