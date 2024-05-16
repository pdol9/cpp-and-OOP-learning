/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:43:42 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:45 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

#define LOG(s) std::cout << s;

class Form;

class Bureaucrat {

private:
	const std::string	_name;
	int					_grade;

public:

	Bureaucrat();
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();
	Bureaucrat( const Bureaucrat& other );
	Bureaucrat& operator=( const Bureaucrat& other );

	std::string	getName() const;
	int		getGrade() const;
	void	incrementGrade( int grade );
	void	decrementGrade( int grade );

	void	signForm( Form& other ) const;

	static const int highestGrade = 1;
	static const int lowestGrade = 150;

	class GradeTooLowException : public std::exception {

		public:
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception {

		public:
			virtual const char *what() const throw();
	};

};

std::ostream& operator<<( std::ostream& out, const Bureaucrat& obj );

#endif
