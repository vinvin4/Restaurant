#include "Restaurant.h"

Restaurant::Restaurant()
{
	this->name = "NoName";
	std::cout << "Restaurant " << this->name << " is opened" << std::endl;
	this->averageBill = 200;
	employer.push_back(new Waiter());
	employer.push_back(new Admin());
	employer.push_back(new Barmen());
}

Restaurant::Restaurant(std::string Name, int avBill)
{
	this->name = Name;
	std::cout << "Restaurant " << this->name << " is opened" << std::endl;
	this->averageBill = avBill;
	employer.push_back(new Waiter());
	employer.push_back(new Admin());
	employer.push_back(new Barmen());

}

Restaurant::~Restaurant()
{
	std::cout << "Restaurant " << this->name << " is closed" << std::endl;

}

void Restaurant::extraPay()
{
	//Добавить файл для документирования премий
	if (this->day % 6 == 0)
	{
		for (int i = 0; i < employer.size(); i++)
		{
			employer[i]->setSalary(employer[i]->getSalary() + 5);
		}
	}

	if (this->day % 30 == 0)
	{
		for (int i = 0; i < employer.size(); i++)
		{
			restCash->changeValue((-1)*employer[i]->getSalary()*10);
			std::cout << "It was extrapayed " << employer[i]->getSalary()*10 << std::endl;
		}
		std::cout << "Day " << this->day << "; Cash value: " << restCash->getValue() << std::endl;
	}
}
int Restaurant::getAvBill()
{
	return averageBill;
}
bool Restaurant::lifecycle()
{
	bool fl = true;
	while (fl)
	{
		day++;
		for (int i = 0; i < employer.size(); i++)
		{
			employer[i]->working(getAvBill());
			restCash->changeValue((-1)*employer[i]->getSalary());
			std::cout << "It was last "<<employer[i]->getSalary() << std::endl;
		}
		std::cout << "Day " << day << "; Cash value: " << restCash->getValue() << std::endl;
		_getch();
		if (day % 10 == 0)
		{
			employer.push_back(new Waiter());
		}
		if (day % 25 == 0)
		{
			employer.push_back(new Barmen());
		}
		
		if (day % 50 == 0)
		{
			employer.push_back(new Admin());
		}
		this->extraPay();
		if (restCash->getValue() < 0)
		{
			std::cout << "You're business crashed" << std::endl;
			return false;
		}
		_getch();

	}
	return false;
}
