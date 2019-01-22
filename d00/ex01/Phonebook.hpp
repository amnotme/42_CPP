/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:39:16 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/21 11:39:17 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX 8
# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class Phonebook
{
	public:

	Phonebook(void);
	~Phonebook(void);

	//class methods
	void 	add(void);
	void		printContacts(void);
	void		search(void);
	void 	sortPhoneBook(void);
	//
	private:

	int 		_count;
	Contact 	_contacts[MAX];
};

#endif
