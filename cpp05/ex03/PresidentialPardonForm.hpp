/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:44:42 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:44:43 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef	PRESIDENT_FORM_HPP
#define PRESIDENT_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	std::string _target;

public:

	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm( const std::string& target );
	PresidentialPardonForm( const PresidentialPardonForm& other );
	PresidentialPardonForm& operator=( const PresidentialPardonForm& other );

	const static int signGrade = 25;
	const static int execGrade = 5;

	std::string		getTarget() const;
	virtual void	execute( const Bureaucrat& executor ) const;

};

#endif
