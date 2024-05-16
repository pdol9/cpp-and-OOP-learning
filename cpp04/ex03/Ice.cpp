

#include "Ice.hpp"

Ice::Ice()  : AMateria("ice")
{
	_type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice( const Ice& other ) : AMateria("ice")
{
	*this = other;
}

Ice& Ice::operator=( const Ice& other )
{
	_type = other._type;
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria* obj = new Ice();
	return obj; 
}

void Ice::use( ICharacter& target )
{
	std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
