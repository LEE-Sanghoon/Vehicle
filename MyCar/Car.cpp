#include "stdafx.h"
#include "Car.h"

#include<iostream>
using namespace std;

Car::Car()
{
	cout << "����Ʈ ������ ȣ��" << endl;

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
	cout << color << "�� �Ҹ��� ȣ��" << endl;
}


void Car::printInfo()
{
	cout << "�ӵ�:" << speed << endl;
	cout << "���:" << gear << endl;
	cout << "����:" << color << endl;
}