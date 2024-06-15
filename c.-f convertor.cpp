#include <iostream>
#include <cmath>

int main()
{
	char unit;
	double temp;

	std::cout << "do you want to contert celsius or fahrenheit";
	std::cout << "answer with C or F: ";
	std::cin >> unit;

	std::cout << "temprature: ";
	std::cin >> temp;


	switch (unit)
	{
	case'C,c':
		temp = (temp * 1.8) + 32;
		std::cout << "fahrenheit temp is " << temp << "°F";
		break;
	case'F,f':
		temp = (temp - 32) / 1.8;
		std::cout << "celsius temp is " << temp << "°C";
		break;
	default:
		std::cout << "wrong";
		break;
	}



	return 0;
}
