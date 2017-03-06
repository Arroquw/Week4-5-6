#pragma once

#include <iostream>
using namespace std;

class Persoon {
protected:
	char naam[30];
public:
	Persoon();
	virtual void print();
};
class Student : public Persoon {
protected:
	char studie[30];
public:
	Student();
	void print();
};
class Werknemer : public Persoon {
protected:
	char afdeling[20];
public:
	Werknemer();
	void print();
};