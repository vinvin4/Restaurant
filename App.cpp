#include "Restaurant.h"
#include "Collection.h"
#include <windows.system.h>

int main()
{
	Restaurant* rest = new Restaurant("Ri", 250); //Create the restaurant
	rest->lifecycle();//Start the endless cycle

	
	return 0;
}