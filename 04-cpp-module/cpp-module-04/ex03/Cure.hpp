#ifndef CURE_HPP
#define CURE_HPP

#include <string>

#include "AMateria.hpp"

#define C_NAME		"cure"

class Cure : public AMateria
{
public:
	AMateria* clone(void) const;
	void use(const ICharacter& ic);

	Cure& operator=(const Cure& c);
	Cure(void);
	explicit Cure(const std::string& type);
	Cure(const Cure& c);
	virtual ~Cure(void);
};

#endif
