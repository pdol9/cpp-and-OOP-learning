/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:43:45 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:46 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
		: _name("DTF-044")
		, _executingGrade(99)
		, _requiredGrade(77)
		, _formSigned(false)
{
	std::cout << "Form: Default Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form: Deconstructor called" << std::endl;
}

Form::Form( std::string name, int execGrade, int reqGrade )
		: _name(name)
		, _executingGrade(execGrade)
		, _requiredGrade(reqGrade)
		, _formSigned(false)
{
	if (execGrade > Bureaucrat::lowestGrade || reqGrade > Bureaucrat::lowestGrade)
		throw (Form::GradeTooLowException());
	else if (execGrade < Bureaucrat::highestGrade || reqGrade < Bureaucrat::highestGrade)
		throw (Form::GradeTooHighException());
	std::cout << "Form: Constructor initializing private members called" << std::endl;
}

Form::Form( const Form& other )
		: _name(other._name)
		, _executingGrade(other._executingGrade)
		, _requiredGrade(other._requiredGrade)
		, _formSigned(other._formSigned)
{
	std::cout << "Form: Copy constructor called" << std::endl;
}

Form& Form::operator=( const Form& other )
{
	_formSigned = other.getSignedForm();
	return *this;
}

bool	Form::beSigned( const Bureaucrat& other )
{
	_formSigned = (other.getGrade() < this->getRequiredGrade()
				&& other.getGrade() < this->getExecutionGrade());
	return _formSigned;
}

std::string	Form::getFormName() const
{
	return _name;
}

int	Form::getExecutionGrade() const
{
	return _executingGrade;
}

int Form::getRequiredGrade() const
{
	return _requiredGrade;
}

bool	Form::getSignedForm() const
{
	return _formSigned;
}

std::ostream&	operator<<( std::ostream& out, const Form& obj )
{
	out << "Name of the form:  " << obj.getFormName() << std::endl;
	out << "Execution grade " << obj.getExecutionGrade() << std::endl;
	out << "Required grade " << obj.getRequiredGrade() << std::endl;
	out << "Form is signed = " << std::boolalpha << obj.getSignedForm() << std::endl;
	return out;
}

const char* Form::GradeTooLowException::what( void ) const throw()
{
	return "Form::GradeTooLowException.";
}

const char* Form::GradeTooHighException::what( void ) const throw()
{
	return "Form::GradeTooHighException.";
}
