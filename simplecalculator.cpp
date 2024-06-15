#include <iostream>

int main()
{
	char op;
	double x;
	double y;
	double resultat;
	std::cout << "skriv enten(+ - * /:)";
	std::cin >> op;

	std::cout << "tal 1 ";
	std::cin >> x;

	std::cout << "tal 2 ";
	std::cin >> y;
	switch (op)
	{
	case'+':
		resultat = x + y;
		std::cout << "resultat:" << resultat; 
		break;
	case'-':
		resultat = x - y;
		std::cout << "resultat:" << resultat;
		break;
	case'*':
		resultat = x * y;
		std::cout << "resultat:" << resultat;
		break;
	case'/':
		resultat = x / y;
		std::cout << "resultat:" << resultat;
		break;
	default:
		std::cout << "skriv rett";
		break;
	}
	

	return 0;
}
