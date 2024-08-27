#include <iostream>

int    main(void)
{
	int    a = 3;
	int &ref = a;
	std::cout << "b n'existe pas encore" << std::endl;
	std::cout << "ref == " << ref << ", a == " << a << "\n" << std::endl;
	int    b = 9;
	std::cout << "Declaration de b, prend la valeur 9. Ref n'a pas ete modifie" << std::endl;
	std::cout << "ref == " << ref << ", a == " << a << ", b == " << b << "\n" << std::endl;
	ref = b;
	std::cout << "ref = b" << std::endl;
	std::cout << "ref == " << ref << ", a == " << a << ", b == " << b << "\n" << std::endl;
	b = 25;
	std::cout << "b = 25" << std::endl;
	std::cout << "ref == " << ref << ", a == " << a << ", b == " << b << "\n" << std::endl;
	a = 42;
	std::cout << "a = 42" << std::endl;
	std::cout << "ref == " << ref << ", a == " << a << ", b == " << b << "\n" << std::endl;
}
