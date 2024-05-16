/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:43:26 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:43 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Anonymous"), _grade(44)
{
	std::cout << "Bureaucrat: Default Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: Deconstructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	if (_grade > lowestGrade)
		throw (Bureaucrat::GradeTooLowException());
	else if (_grade < highestGrade)
		throw (Bureaucrat::GradeTooHighException());
	std::cout << "Bureaucrat: Constructor initializing vars called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat: Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other )
{
	std::cout << "Bureaucrat: assignment operator called" << std::endl;
	_grade = other._grade;
	return *this;
}

std::string	Bureaucrat::getName() const
{
	return _name;
}

int		Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incrementGrade( int grade )
{
	_grade -= grade;
	if (_grade < highestGrade)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrementGrade( int grade )
{
	_grade += grade;
	if (_grade > lowestGrade)
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& obj )
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "Bureaucrat::GradeTooLowException.";
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "Bureaucrat::GradeTooHighException.";
}
