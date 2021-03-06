#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
public:
	virtual const std::string& getName(void) const = 0;
	virtual void equip(AMateria* am) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, const ICharacter& ic) = 0;

	virtual ~ICharacter(void) {}
};

#endif
