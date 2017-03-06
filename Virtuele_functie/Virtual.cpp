#include "Virtual.hpp"

Persoon::Persoon() {
	cout << "Voer naam in: ";
	cin >> naam;
}
void Persoon::print() {
	cout << "Deze persoon heet: " << naam << endl;
}
Student::Student() {
	cout << "Welke studie?: ";
	cin >> studie;
}
void Student::print() {
	cout << naam << "studeert " << studie << endl;
}
Werknemer::Werknemer() {
	cout << "Voer afdeling in: ";
	cin >> afdeling;
}
void Werknemer::print() {
	cout << naam << "werkt op afdeling " << afdeling << endl;
}