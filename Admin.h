#pragma once
#include "Worker.h"
class Admin :
	public Worker
{
public:
	Admin();
	~Admin();
	void working(int);	
};

