// Vierkant.cpp : Defines the entry point for the console application.
//
#include "Header.h"
#include <string>

Rechthoek::Rechthoek(int h, int b) {
	this->hoogte = h;
	this->SquareBreedte = b;
}

Rechthoek_met_titel::Rechthoek_met_titel(int h, int b, std::string t) {
	this->hoogte = h;
	this->SquareBreedte = b;
	this->titel = t;
}

Rechthoek_titel::Rechthoek_titel(int h, int b, std::string t) {
	this->hoogte = h;
	this->SquareBreedte = b;
	this->titel = t;
}

void Rechthoek_titel::print() {
	for (int breedte1 = 1; breedte1 <= hoogte; breedte1++) {
		if (breedte1 <= 1) {
			if (titel.length() < SquareBreedte) {
				for (int breedte1 = 1;breedte1 <= ((SquareBreedte - titel.length()) / 2); breedte1++) {
					std::cout << "*";
				}
				std::cout << titel;
				for (int breedte1 = 1;breedte1 <= ((SquareBreedte - titel.length()) / 2); breedte1++) {
					std::cout << "*";
				}
			}
			else {
				std::cout << "*";
				std::cout << titel.substr(0, SquareBreedte - 2);
				std::cout << "*";
			}
		}
		else if (breedte1 < hoogte) {
			std::cout << std::endl;
			for (int r = 1; r <= SquareBreedte; r++) {
				if (r == 1 || r == SquareBreedte) {
					std::cout << "*";
				}
				else std::cout << " ";
			}
		}
		else {
			std::cout << std::endl;
			for (int j = 1; j <= SquareBreedte; j++) {
				std::cout << "*";
			}
		}
	}
}

void Rechthoek_met_titel::print() {
	for (int breedte2 = 1; breedte2 <= hoogte; breedte2++) {
		if (breedte2 <= 1) {
			if (titel.length() < SquareBreedte) {
			for (int breedte2 = 1;breedte2 <= ((SquareBreedte - titel.length()) / 2); breedte2++) {
				std::cout << "*";
			}
			std::cout << titel;
			for (int breedte2 = 1;breedte2 <= ((SquareBreedte - titel.length()) / 2); breedte2++) {
				std::cout << "*";
			}
			}
			else {
				std::cout << "*";
				std::cout << titel.substr(0, SquareBreedte- 2);
				std::cout << "*";
			}
		}
		else if (breedte2 < hoogte) {
			std::cout << std::endl;
			for (int r = 1; r <= SquareBreedte; r++) {
				if (r == 1 || r == SquareBreedte) {
					std::cout << "*";
				}
				else std::cout << " ";
			}
		}
		else {
			std::cout << std::endl;
			for (int j = 1; j <= SquareBreedte; j++) {
				std::cout << "*";
			}
		}
	}
}

void Rechthoek::print() {
	for (int breedte3 = 1; breedte3 <= hoogte; breedte3++) {
		if (breedte3 <= 1) {
			for (int breedte3 = 1;breedte3 <= SquareBreedte; breedte3++) {
				std::cout << "*";
			}
		}
		else if (breedte3 < hoogte) {
			std::cout << std::endl;
			for (int r = 1; r <= SquareBreedte; r++) {
				if (r == 1 || r == SquareBreedte) {
					std::cout << "*";
				}
				else std::cout << " ";
			}
		}
		else {
			std::cout << std::endl;
			for (int j = 1; j <= SquareBreedte; j++) {
				std::cout << "*";
			}
		}
	}
}

int main() {
	Rechthoek r(4, 8);
	Rechthoek_met_titel rh(4, 12, "window");
	Rechthoek_titel v(10, 20, "hoi12343556");
	r.print();
	std::cout << std::endl;
	rh.print();
	std::cout << std::endl;
	v.print();
	while (1) {
	}
	return 0;
}


