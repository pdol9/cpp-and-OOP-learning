/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:10:19 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:10:20 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

struct Data {

private:
	int value;
	int value1;

public:
	Data();
	~Data();
	Data(const Data& other);
	Data& operator=(const Data& other);

};

#endif
