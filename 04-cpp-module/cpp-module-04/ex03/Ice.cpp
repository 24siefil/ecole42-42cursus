#include "Ice.hpp"
#include "ICharacter.hpp"

AMateria* Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(const ICharacter& ic)
{
	std::cout << "[ " << std::setw(W_SIZE)
		<< "use Function on Ice" << " ]"
		<< " * shoots an ice bolt at " << ic.getName() << " *" << std::endl;
}

Ice& Ice::operator=(const Ice& i)
{
	if (this != &i)
		_type = i.getType();
	std::cout << "[ " << std::setw(W_SIZE)
		<< "Assignation on Ice" << " ]" << std::endl;
	return (*this);
}

Ice::Ice(void)
	: AMateria(I_NAME)
{
	std::cout << "[ " << std::setw(W_SIZE)
		<< "Default Constructor on Ice" << " ]" << std::endl;
}

Ice::Ice(const std::string& type)
	: AMateria(type)
{
	std::cout << "[ " << std::setw(W_SIZE)
		<< "Named Constructor on Ice" << " ]" << std::endl;
}

Ice::Ice(const Ice& i)
	: AMateria(i.getType())
{
	std::cout << "[ " << std::setw(W_SIZE)
		<< "Copy Constructor on Ice" << " ]" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "[ " << std::setw(W_SIZE)
		<< "Destructor on Ice" << " ]" << std::endl;
}
