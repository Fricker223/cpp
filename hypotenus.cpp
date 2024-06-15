#include <iostream>
#include <cmath>
int main()
{
	double x;
	double y;
	std::cout << "side 1 ";
	std::cin >> x;
	std::cout << "side 2 ";
	std::cin >> y;


	double svar = hypot(x, y);


	std::cout << svar;
	
	return 0;
}