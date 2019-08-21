#include "Barmen.h"

Barmen::Barmen()
{
	Collection* cal = new Collection();
	this->setName(cal->getName());
	delete(cal);
	srand(time(0));
	int num = rand() % 8;
	if (num % 2 == 0)
	{
		this->setTalkative(true);
	}
	if (num == 3)
	{
		this->setNervous(true);
	}
	std::cout << "Barmen " << this->getName() << " is entered;" << std::endl;	
	this->setSalary(150);
}

Barmen::~Barmen()
{
	std::cout << "Barmen " << this->getName() << " is lost;" << std::endl;
}

void Barmen::working(int averageBill)
{
	int result = averageBill;
	if (this->getTalkative())
	{
		result += 50;
	}
	else
	{
		if (this->getNervous())
		{
			result = 0;
		}
	}

	srand(time(0));
	if (rand() % 10 == 0)
	{
		result += averageBill;
	}

	std::cout << "Barmen " << this->getName() << " was given " << result << std::endl;
	Cash* kassa = Cash::getCash();
	kassa->changeValue(result);
}