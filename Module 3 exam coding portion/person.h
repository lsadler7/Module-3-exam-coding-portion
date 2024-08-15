#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class person
{
private:
	string first, last, dob;

public:
	person();
	person(string first, string last, string dob);
	string getFirst(string f) const;
	string getLast(string l) const;
	string getDOB(string DOB);


};



#endif



