
#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("Void")
{

}


AMateria::~AMateria( void )
{

}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << "AMateria: Copy constructor called" << std::endl;
}

AMateria::AMateria( AMateria const & other )
{
	std::cout << "AMateria: Copy constructor called" << std::endl;
	*this = other;
}

AMateria& AMateria::operator=( const AMateria& other )
{
	_type = other._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "how to use this func?? " << target.getName()
	<< ": I don't know..." << std::endl;
}
