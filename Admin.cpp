#include "Admin.h"

Admin::Admin()
{
	Collection* cal = new Collection();
	this->setName(cal->getName());
	delete(cal);
	srand(time(0));
	int num = rand() % 10;
	if (num % 3 == 0)
	{
		this->setTalkative(true);
	}
	if (num == 5 || num == 7)
	{
		this->setNervous(true);
	}
	this->setSalary(300);
	std::cout << "Admin " << this->getName() << " is entered;" << std::endl;
}

Admin::~Admin()
{
	std::cout << "Admin " << this->getName() << " is lost;" << std::endl;
}

void Admin::working(int averageBill)
{
	int result = averageBill;
	if (this->getTalkative())
	{
		result += 300;
	}
	else
	{
		if (this->getNervous())
		{
			result = result / 3;
		}
	}

	srand(time(0));
	if (rand() % 10 == 0)
	{
		result += (averageBill * 3) / 2;
	}

	std::cout << "Admin " << this->getName() << " was given " << result << std::endl;

	Cash* kassa = Cash::getCash();
	kassa->changeValue(result);
}