#include "Fixed.hpp"

int main(void)
{
	Fixed c(2.5f);
	Fixed x(5);

	Fixed const d(Fixed(5.05f) * Fixed(2));

	std::cout << "d = " << d << "\tx = " << x << std::endl;
	std::cout << ++x << std::endl;
	std::cout << "c = " << c << "\t\tx = " << x << std::endl;
	std::cout << "c + x = " << c + x << std::endl;
	std::cout << "c = " << c << "\tx = " << x << std::endl;
	std::cout << "c - x = " << c - x << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;
	if (c < d)
		std::cout << "c < d" << std::endl;
	else
		std::cout << "c > d" << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;

	Fixed j(5);
	Fixed i(2);
	std::cout << "\nj = " << j << "\ti = " << i << std::endl;
	std::cout << "j / i = " << j / i << std::endl;
	std::cout << "j * i = " << j * i << std::endl;

	std::cout << "\nMAIN TEST:" << std::endl;
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}