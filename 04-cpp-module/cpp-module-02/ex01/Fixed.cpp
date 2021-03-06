#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	return (_fixed_point);
}

void Fixed::setRawBits(const int raw)
{
	_fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixed_point) / (1 << Fixed::_frac_bits));
}

int Fixed::toInt(void) const
{
	return (_fixed_point >> Fixed::_frac_bits);
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f)
		_fixed_point = f.getRawBits();
	return (*this);
}

Fixed::Fixed(void)
	: _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int v)
	: _fixed_point(v << Fixed::_frac_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float v)
	: _fixed_point(static_cast<int>(roundf(v * (1 << Fixed::_frac_bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	return (o << f.toFloat());
}
