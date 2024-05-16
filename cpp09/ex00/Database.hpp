/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:12:27 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 14:36:49 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATABASE_HPP
#define __DATABASE_HPP

#include "BitcoinExchange.hpp"

class Database {

	protected:
		const char				*_inputFileName;
		std::ifstream			_DataBase;
		std::string				_line;
		std::deque<std::string> _FileContent;

	public:
		Database();
		virtual ~Database();
		Database(const char *inputFile);
		Database(const Database& other);
		Database& operator=(const Database& other);

		static const std::string errorMsg;

		std::string				getLine() const;
		std::deque<std::string>	getFileContent() const;
		void					readDataBase();

		class tooLargeNumException : public std::exception {
		public:
			virtual const char *what() const throw ();
		};
		class negativeNumException : public std::exception {
		public:
			virtual const char *what() const throw ();
		};
};

#endif
