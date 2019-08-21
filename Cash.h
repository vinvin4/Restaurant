#pragma once
#include <iostream>
class Cash
{
private:
	Cash();
	int value;
	
public:
	static Cash* cash; 
	static Cash* getCash();
	void changeValue(int);
	int getValue();
	
	~Cash();
};

