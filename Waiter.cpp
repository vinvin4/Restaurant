#include "Waiter.h"

Waiter::Waiter()
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
	std::cout << "Waiter " << this->getName() << " is entered;" << std::endl;
	this->setSalary(100);
}

Waiter::~Waiter()
{
	std::cout << "Waiter " << this->getName() << " is lost;" << std::endl;
}

void Waiter::working(int averageBill)
{
	int result = averageBill;
	if (this->getTalkative())
	{
		result += 100;
	}
	else
	{
		if (this->getNervous())
		{	
			result = result / 2;
		}
	}
	
	srand(time(0));
	if (rand() % 10 == 0)
	{
		result += averageBill;
	}

	std::cout << "Waiter "<<this->getName()<<" was given " << result << std::endl;
	Cash* kassa = Cash::getCash();
	kassa->changeValue(result);		
}