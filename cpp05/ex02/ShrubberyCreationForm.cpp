/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:44:53 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:34 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm()
		: Form("ShrubberyCreationForm",24,6)
		, _target("None")
{
	std::cout << "ShrubberyCreationForm: Default Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: Deconstructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
		: Form("ShrubberyCreationForm",24,6)
		, _target(target)
{
	std::cout << "ShrubberyCreationForm:  Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other )
		: Form(other)
		, _target(other._target)
{
	std::cout << "ShrubberyCreationForm: Copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other )
{
	std::cout << "ShrubberyCreationForm: Assignement operator called" << std::endl;
	_target = other._target;
	return *this;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSignedForm() == false)
		throw (Form::FormNotSigned());
	if (executor.getGrade() > this->getExecutionGrade())
		throw (Form::GradeTooLowException());

	std::ofstream file;
	file.open((_target + "_shrubbery").c_str());
	std::string tree = 

"\n"
"                     / / /									\n"
"                   /        /  /     //    /				\n"
"                /                 /         /  /			\n"
"                                /							\n"
"                               /                //			\n"
"               /          /            /              /	\n"
"               /            '/,        /               /	\n"
"               /              'b      *					\n"
"                /              '$    //                //	\n"
"               /    /           $:   /:               /	\n"
"             //      /  //      */  @):        /   / /		\n"
"                          /     :@,@):   ,/**:'   /		\n"
"              /      /,         :@@*: //**'      /   /		\n"
"                       '/o/    /:(@'/@**'  /				\n"
"               /  /       'bq,//:,@@*'   ,*      /  /		\n"
"                          ,p$q8,:@)'  /p*'      /			\n"
"                   /     '  / '@@Pp@@*'    /  /			\n"
"                    /  / //    Y7'.'     /  /				\n"
"                              :@):.						\n"
"                             .:@:'							\n"
"                           .::(@:.      -Sam Blumenstein-	\n"
"                         .::::!!!::.						";

	file << tree << std::endl;
	file.close();
}
