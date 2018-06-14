#pragma once
#include<string>

class Car
{
private:
	int speed;
	int gear;
	
	std::string color;

public:
	Car();
	Car(int speed, int gear, std::string color);

	~Car();

	void printInfo();
};

