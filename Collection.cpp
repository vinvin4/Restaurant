#include "Collection.h"



Collection::Collection()
{

}

std::string Collection::getName()
{
	srand(time(0));
	Sleep(500);
	return nameCol[rand() % Nname];
}

Collection::~Collection()
{
}
