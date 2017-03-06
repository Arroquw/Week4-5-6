#pragma once

#include <iostream>
#include <string.h>

class Rechthoek {
private:	// ? velden altijd private…
	int hoogte;
	int SquareBreedte;
public:
	Rechthoek(int h = 1, int b = 1);
	virtual void print();
};


class Rechthoek_met_titel : public Rechthoek {
private:
	int hoogte;
	int SquareBreedte;
	std::string titel;
public:
	Rechthoek_met_titel(int h = 1, int b = 1, std::string = " ");
	virtual void print();
};

class Rechthoek_titel : public Rechthoek {
private:
	int hoogte;
	int SquareBreedte;
	std::string titel;
public:
	Rechthoek_titel(int h = 1, int b = 1, std::string = " ");
	virtual void print();
};