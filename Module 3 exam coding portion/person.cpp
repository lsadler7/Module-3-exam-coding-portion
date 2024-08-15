#include "person.h"
#include <string>
#include <iostream>
using namespace std;

person::person()
{
}

person::person(string first, string last, string dob)
{
}

string person::getFirst(string f) const
{
	f = first;
	return f;
}

string person::getLast(string l) const
{
	l = last;
	return l;
}

string person::getDOB(string DOB)
{
	DOB = dob;
	return dob;
}
