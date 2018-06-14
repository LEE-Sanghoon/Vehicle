// CarTest.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Car.h"
#include <iostream>
using namespace std;

void drive(Car* pCar);

int main()
{
	{
		Car c1;
		Car c2(0, 1, "BLACK");

		drive(&c1);
		drive(&c2);
	}

	cin.get();

    return 0;
}

void drive(Car* pCar) {

	pCar->printInfo();
}