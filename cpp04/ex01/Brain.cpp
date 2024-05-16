/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:22:01 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:28:26 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
	return;
}

Brain::~Brain()
{
	std::cout << "Brain: Deconstuctor called" << std::endl;
	return;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain: assignment operator called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];
	return *this;
}

void	Brain::setIdea(int num, std::string& idea) {

	_ideas[num] = idea;
}

std::string	Brain::getIdea(int num) const {

	return _ideas[num];
}
