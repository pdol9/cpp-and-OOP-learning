

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure: default constructor called." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure: deconstructor called." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	*this = other;
}

Cure& Cure::operator=(const Cure& other)
{
	_type = other._type;
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria* obj = new Cure();
	return obj;
}

void Cure::use( ICharacter& target )
{
	std::cout << "Cure: * heals " << target.getName() << "’s wounds *" << std::endl;
}
