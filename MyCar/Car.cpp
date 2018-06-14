#include "stdafx.h"
#include "Car.h"

#include<iostream>
using namespace std;

Car::Car()
{
	cout << "디폴트 생성자 호출" << endl;

	speed = 0;
	gear = 1;

	color = "";
}


Car::Car(int speed, int gear, string color):Car()
{
	this->speed = speed;
	this->gear = gear;

	this->color = color;
}

Car::~Car()
{
	cout << color << "의 소멸자 호출" << endl;
}


void Car::printInfo()
{
	cout << "속도:" << speed << endl;
	cout << "기어:" << gear << endl;
	cout << "색상:" << color << endl;
}