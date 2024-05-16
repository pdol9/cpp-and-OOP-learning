/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:45:33 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:45:34 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {

public:

	Intern();
	~Intern();
	Intern( const Intern& other );
	Intern& operator=( const Intern& other );

	Form* makeForm( const std::string& formName, const std::string& target );
};

#endif
