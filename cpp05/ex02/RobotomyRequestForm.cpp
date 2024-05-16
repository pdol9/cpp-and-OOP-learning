/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:44:45 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:44:46 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm",24,6)
	, _target("None")
{
	std::cout << "RobotomyRequestForm: Default Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: Deconstructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target )
		: Form("RobotomyRequestForm",24,6)
		, _target(target)
{
	std::cout << "RobotomyRequestForm:  Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other )
		: Form(other)
		, _target(other._target)
{
	std::cout << "RobotomyRequestForm: Copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other )
{
	std::cout << "PresidentialPardonForm: Assignement operator called" << std::endl;
	_target = other._target;
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return _target;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getSignedForm() == false)
		throw (Form::FormNotSigned());
	if (executor.getGrade() > this->getExecutionGrade())
		throw (Form::GradeTooLowException());

	int num;
	srand(time(0));
	num = rand(); 
	if (num % 2) {
		std::cout << "drrrrrr ...." << std::endl << _target
				<< " has been robotomized successfully 50:50 of the time." << std::endl;
	} else {
		std::cout << "robotomy has failed." << std::endl;
	}
}
