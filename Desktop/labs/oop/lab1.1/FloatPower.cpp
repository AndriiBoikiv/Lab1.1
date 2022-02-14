//FloatPower.cpp

#include "FloatPower.h"

float FloatPower::get_first()
{
	return first;
};

float FloatPower::get_second()
{
	return second;
};

void FloatPower::set_first(float value)
{
	first = value;
};

void FloatPower::set_second(float value)
{
	second = value;
};

bool FloatPower::init( float x, float y)
{
	if (x != 0)
	{
		first = x;
		second = y;
		return true;
	}
	else{
        cout << "Try again!" << endl;
		return false;
    }
};

void FloatPower::display() const
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
};

void FloatPower::read()
{
	int x, y;
	do {
		cout << "first = ";
		cin >> first;
		cout << "second = ";
		cin >> second;
	} while (!init(x, y));
	
};

void FloatPower::power()
{
	double c;
	c = pow(first, second);
	cout << "c = " << c<< endl;
};