/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:30:07 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 13:37:36 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

class Contact {

private:

	int	_index;
	std::string	_saveInput;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:

	Contact( void );
	~Contact( void );

	void	set_index( int i );
	void	set_firstName( void );
	void	set_lastName( void );
	void	set_nickName( void );
	void	set_phoneNumber( void );
	void	set_darkestSecret( void );
	void	displayContact( void );
	void	displayInfo( int i );
	void	getUserInput( std::string s );
};

#endif
