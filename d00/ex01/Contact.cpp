/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:38:33 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/21 11:38:38 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}
Contact::~Contact(void)
{
	return ;
}
Contact::Contact(Contact const & src)
{
	*(this) = src;
}
Contact  &Contact::operator=(Contact const & rhs)
{
	if (this == &rhs)
		return *(this);
	this->_firstName = rhs.getFirstName();
	this->_lastName = rhs.getLastName();
	this->_nickName = rhs.getNickName();
	this->_login = rhs.getLogin();
	this->_postalAddress = rhs.getPostalAddress();
	this->_email = rhs.getEmail();
	this->_phone = rhs.getPhone();
	this->_birthday = rhs.getBirthday();
	this->_favoriteMeal = rhs.getFavoriteMeal();
	this->_underwearColor = rhs.getUnderwearColor();
	this->_darkestSecret = rhs.getDarkestSecret();
	return (*this);
}
bool 		Contact::isEmpty(void)
{
	return(this->_firstName == "");
}
void 		Contact::printContact(void)
{
	std::cout << HPURPLE;
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickName() << std::endl;
	std::cout << "Login: " << this->getLogin() << std::endl;
	std::cout << "Postal Address: " << this->getPostalAddress() << std::endl;
	std::cout << "Email: " << this->getEmail() << std::endl;
	std::cout << "Phone: " << this->getPhone() << std::endl;
	std::cout << "Birthday: " << this->getBirthday() << std::endl;
	std::cout << "Favorite Meal: " << this->getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color: " << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
	std::cout << RESET;
}
std::string 	Contact::getFirstName(void) const
{
	return (this->_firstName);
}
std::string 	Contact::getLastName(void) const
{
	return (this->_lastName);
}
std::string 	Contact::getNickName(void) const
{
	return (this->_nickName);
}
std::string 	Contact::getLogin(void) const
{
	return (this->_login);
}
std::string 	Contact::getPostalAddress(void) const
{
	return (this->_postalAddress);
}
std::string	Contact::getEmail(void) const
{
	return (this->_email);
}
std::string 	Contact::getPhone(void) const
{
	return (this->_phone);
}
std::string 	Contact::getBirthday(void) const
{
	return (this->_birthday);
}
std::string 	Contact::getFavoriteMeal(void) const
{
	return (this->_favoriteMeal);
}
std::string	Contact::getUnderwearColor(void) const
{
	return (this->_underwearColor);
}
std::string 	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
void 		Contact::setFirstName(std::string const fn)
{
	this->_firstName = fn;
}
void 		Contact::setLastName(std::string const ln)
{
	this->_lastName = ln;
}
void 		Contact::setNickName(std::string const nn)
{
	this->_nickName = nn;
}
void 		Contact::setLogin(std::string const login)
{
	this->_login = login;
}
void 		Contact::setPostalAddress(std::string const pa)
{
	this->_postalAddress = pa;
}
void  		Contact::setEmail(std::string const email)
{
	this->_email = email;
}
void 		Contact::setPhone(std::string const phone)
{
	this->_phone = phone;
}
void 		Contact::setBirthday(std::string const birth)
{
	this->_birthday = birth;
}
void 		Contact::setFavoriteMeal(std::string const fm)
{
	this->_favoriteMeal = fm;
}
void 		Contact::setUnderwearColor(std::string const uc)
{
	this->_underwearColor = uc;
}
void 		Contact::setDarkestSecret(std::string const ds)
{
	this->_darkestSecret = ds;
}
