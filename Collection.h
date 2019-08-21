#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

#define Nname 8

class Collection final
{
private:
	std::string nameCol[Nname] = {"Daniell", "Johnny", "Ann", "Tanya", "Alex", "Roman", "Olga", "Kate"};
public:
	Collection();
	std::string getName();

	~Collection();
};

