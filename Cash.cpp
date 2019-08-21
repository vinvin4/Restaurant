#include "Cash.h"

Cash* Cash::cash = 0;

Cash::Cash()
{		
	value = 1000;	
}

Cash* Cash::getCash()
{
	if (cash == 0)
	{
		cash = new Cash();		
	}
	return cash;
}
void Cash::changeValue(int value)
{
	cash->value += value;
}

int Cash::getValue()
{
	return value;
}
Cash::~Cash()
{
	delete(cash);
}
