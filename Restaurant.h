#pragma once
#include <string>
#include <vector>
#include "Waiter.h"
#include "Admin.h"
#include "Barmen.h"
#include "Cash.h"
#include <conio.h>

class Restaurant
{
private:
	std::string name;
	int averageBill;
	int day = 0;
public:
	/**Vector of all workers
	*/
	std::vector<Worker*> employer;
	Restaurant();	
	Restaurant(std::string, int);
	~Restaurant();
	/**First creating the object
	*/
	Cash* restCash = Cash::getCash();
	void extraPay();
	int getAvBill();
	/**Cycle of restaurant life
	*/
	bool lifecycle();
};

