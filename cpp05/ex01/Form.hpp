/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:43:49 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:47 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	const std::string	_name;
	const int			_executingGrade;
	const int			_requiredGrade;
	/* using for modifing 'only' one var 
	inside" func(const Obj& other) const*/
	/*mutable*/	bool		_formSigned;

public:
	Form();
	~Form();
	Form( const Form& other );
	Form& operator=( const Form& other );

	Form( std::string name, int execGrade, int reqGrade );

	std::string	getFormName() const;
	int			getExecutionGrade() const;
	int			getRequiredGrade() const;
	bool		getSignedForm() const;

	bool		beSigned( const Bureaucrat& other );

	class GradeTooLowException : public std::exception {

		public:
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception {

		public:
			virtual const char *what() const throw();
	};

};

std::ostream& operator<<( std::ostream& out, const Form& obj );

#endif
