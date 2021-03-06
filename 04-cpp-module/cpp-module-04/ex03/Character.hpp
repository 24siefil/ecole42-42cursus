#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
private:
	AMateria* _am[AM_SIZE];
	std::string _name;

public:
	const AMateria* getAMateria(int idx) const;
	const std::string&  getName(void) const;
	void equip(AMateria* am);
	void unequip(int idx);
	void use(int idx, const ICharacter& ic);

	Character& operator=(const Character& c);
	Character(void);
	explicit Character(const std::string& name);
	Character(const Character& c);
	virtual ~Character(void);
};

#endif
