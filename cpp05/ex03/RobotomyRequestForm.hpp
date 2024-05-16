/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:44:49 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:44:50 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ROBOTOMY_FORM_HPP
#define ROBOTOMY_FORM_HPP

#include "Form.hpp"
#include  <cstdlib>
#include  <ctime>

class RobotomyRequestForm : public Form {

private:
	std::string _target;

public:

	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm( const std::string& target);
	RobotomyRequestForm( const RobotomyRequestForm& other );
	RobotomyRequestForm& operator=( const RobotomyRequestForm& other );

	const static int signGrade = 72;
	const static int execGrade = 45;

	std::string		getTarget() const;
	virtual void	execute( const Bureaucrat& executor ) const;
};

#endif
