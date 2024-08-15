#pragma once
#include <string>
#include <iostream>
#ifndef CITY_H
#define CITY_H
class city
{
private:
	string name;
	double latitude;
	double longitude;

public:
	city(string name, double latitude, double longitude);
	string getCity(string c) const;

};

#endif