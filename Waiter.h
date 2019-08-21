#pragma once
#include "Worker.h"
class Waiter :
	public Worker
{
public:
	Waiter();
	~Waiter();
	void working(int);
};

