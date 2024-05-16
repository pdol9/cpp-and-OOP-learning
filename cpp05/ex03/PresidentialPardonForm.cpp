/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:44:37 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:44:38 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
		: Form("PresidentialPardonForm",20,3) //execGrade,reqGrade
		, _target("None")
{
	std::cout << "PresidentialPardonForm: Default Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm: Deconstructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other )
		: Form(other)
		, _target(other._target)
{
	std::cout << "PresidentialPardonForm: Copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other )
{
	std::cout << "PresidentialPardonForm: Assignement operator called" << std::endl;
	_target = other._target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
		: Form("PresidentialPardonForm",25,5)
		, _target(target)
{
	std::cout << "PresidentialPardonForm:  Constructor called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return _target;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->getSignedForm() == false)
		throw (Form::FormNotSigned());
	if (executor.getGrade() > this->getExecutionGrade())
		throw (Form::GradeTooLowException());
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
