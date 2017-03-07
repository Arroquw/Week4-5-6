#include "Virtual.hpp"

void main() {
	Persoon *p, *q, *r;
	p = new Persoon;
	q = new Student;
	r = new Werknemer;
	p->print();
	q->print();
	r->print();
	std::cin.get();
	std::cin.get();
}

//1.1 P constructor van persoon, q zowel van student als persoon, r zowel van werknemer als persoon
//1.2 alle prints van persoon
//2.1 P print van persoon, q print van student, r print van werknemer
//2.2 een virtuele functie geeft aan dat deze overgeërfd kan worden door de afgeleide klasses.