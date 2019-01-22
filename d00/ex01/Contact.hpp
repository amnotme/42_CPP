/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:38:26 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/21 11:38:27 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "Colors.hpp"
# include <string>
# include <iostream>

class Contact
{
	public:

	Contact(void);
	~Contact(void);
	Contact (Contact const & src);
	Contact &operator=(Contact const & rhs);

	bool 		isEmpty(void);
	void 		printContact(void);
	//class methods
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getLogin(void) const;
	std::string	getPostalAddress(void) const;
	std::string	getEmail(void) const;
	std::string	getPhone(void) const;
	std::string	getBirthday(void) const;
	std::string	getFavoriteMeal(void) const;
	std::string	getUnderwearColor(void) const;
	std::string	getDarkestSecret(void) const;

	void 		setFirstName(std::string const fn);
	void 		setLastName(std::string const ln);
	void 		setNickName(std::string const nn);
	void 		setLogin(std::string const login);
	void 		setPostalAddress(std::string const pa);
	void 		setEmail(std::string const email);
	void 		setPhone(std::string const ph);
	void 		setBirthday(std::string const birth);
	void 		setFavoriteMeal(std::string const fm);
	void 		setUnderwearColor(std::string const uc);
	void 		setDarkestSecret(std::string const ds);

	//class attributes
	private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_email;
	std::string	_phone;
	std::string	_birthday;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
};

#endif
