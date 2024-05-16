/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:44:57 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:37 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRUB_FORMS_HPP
#define SCRUB_FORMS_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:
	std::string _target;

public:

	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm( const std::string& target );
	ShrubberyCreationForm( const ShrubberyCreationForm& other );
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );

	const static int signGrade = 145;
	const static int execGrade = 137;

	std::string		getTarget() const;
	virtual	void	execute( const Bureaucrat& executor ) const;
	
};

#endif
