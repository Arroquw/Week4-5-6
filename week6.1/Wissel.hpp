#pragma once
#include <iostream>

template <class A_Type> class Wissel
{
public:
	A_Type wissel(A_Type x, A_Type y);
private:
	A_Type a;
};

template <class A_Type> A_Type Wissel<A_Type>::wissel(A_Type x, A_Type y)
{
	std::cout << x << " " << y << std::endl;
	a = x;
	x = y;
	y = a;
	std::cout << x << " " << y << std::endl;
	return x + y + a;
}
