/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:39:03 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/21 11:39:04 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void 		menu(void)
{
	std::cout << BAGREEN;
	std::cout << "Welcome to your Phonebook" << RESET << BGREEN << std::endl;
	std::cout << "Please make a selection from the following: " << std::endl;
	std::cout << "To add a contact: type [1] or 'add' " << std::endl;
	std::cout << "To search for a contact: type [2] or 'search' " << std::endl;
	std::cout << "To exit your digital phonebook: type [3] or 'exit' " << std::endl;
	std::cout << RESET;
}
Phonebook::Phonebook(void) :
_count(0)
{
	menu();
	return ;
}
Phonebook::~Phonebook(void)
{
	return ;
}
void 		Phonebook::sortPhoneBook(void)
{
	int 		i = 1;
	int 		flag = 1;
	Contact 	temp;

	while (flag)
	{
		flag = 0;
		while (i < this->_count)
		{
			if (std::strcmp(this->_contacts[i].getFirstName().c_str(), \
				this->_contacts[i - 1].getFirstName().c_str()) < 0)
			{
				temp = this->_contacts[i - 1];
				this->_contacts[i - 1] = this->_contacts[i];
				this->_contacts[i] = temp;
				flag = 1;
				i = 0;
			}
			i++;
		}
	}
}
void 		Phonebook::add(void)
{
	system("clear");
	if (this->_count == 8)
	{
		std::cout << URED;
		std::cout << "Sorry the phonebook is full" << RESET << std::endl;
		menu();
		return ;
	}
	std::string tempString;

	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "What's the first name? " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setFirstName(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "What's the last name? " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setLastName(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Give your contact a nickname: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setNickName(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Intra associated with the contact: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setLogin(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Contact's Address: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setPostalAddress(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Contact's email: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setEmail(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Contact's Phone number: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setPhone(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Contact's Birthday: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setBirthday(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Favorite Meal: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setFavoriteMeal(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Contact's Underwear Color: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setUnderwearColor(tempString);
	if (std::cin.eof())
		exit(1);
	std::cout << BYELLOW << "Contact's Darkest Secret: " << RESET;
	std::getline(std::cin, tempString);
	this->_contacts[this->_count].setDarkestSecret(tempString);
	this->_count += 1;
	sortPhoneBook();
	system("clear");
	menu();
}

void 		printHeader(void)
{
	std::cout << BABLUE;
	std::cout << "----------|----------|----------|----------|" << RESET << std::endl;
	std::cout << BPURPLE;
	std::cout << "| Contact | First N  | Last N   | Nickname |" << RESET << std::endl;
	std::cout << BABLUE;
	std::cout << "----------|----------|----------|----------|" << RESET << std::endl;
}
void 		printFooter(void)
{
	std::cout << BABLUE;
	std::cout << "----------|----------|----------|----------|" << RESET << std::endl;
}
std::string	truncate(std::string str, size_t width)
{
	size_t 		len = str.length();
	size_t 		diff = width - len;
	std::string 	sub;

	if (len >= width)
		return (str.substr(0, width - 1)) + ".";
	else
	{
		while (diff > 0)
		{
			sub += " ";
			diff--;
		}
	}
	return (sub + str.substr(0, len));
}
void 		Phonebook::printContacts(void)
{
	printHeader();
	for (int i = 0; i < MAX; i++)
	{
		std::cout << HBCYAN;
		std::stringstream ss;
		ss << (i + 1);
		std::string integer = ss.str();
		std::cout << std::right << "|" << truncate(integer, 9);
		std::cout << std::right << "|" << truncate(this->_contacts[i].getFirstName(), 10);
		std::cout << std::right << "|" << truncate(this->_contacts[i].getLastName(), 10);
		std::cout << std::right << "|" << truncate(this->_contacts[i].getNickName(), 10);
		std::cout << "|" << std::endl;
	}
	std::cout << RESET;
	printFooter();
}
void 		makeASelection(void)
{
	std::cout << BGREEN;
	std::cout << "Please select a contact to review its information [1 - 8]: ";
	std::cout << RESET;
}
void 		Phonebook::search(void)
{
	std::string 		tempString;
	int 				flag = 1;

	system("clear");
	if (this->_count == 0)
	{
		std::cout << BRED << "Your phonebook is empty. Try adding a contact first." << RESET << std::endl;
		flag = 0;
		menu();
	}
	else
	{
		printContacts();
		makeASelection();
		if (std::cin.eof())
			exit (1);
	}
	while (flag)
	{
		flag = 0;
		int convertedStringToInt = 0;

		std::getline(std::cin, tempString);
		std::stringstream 	temp(tempString);
		temp >> convertedStringToInt;
		if (convertedStringToInt >= 1 && convertedStringToInt <= 8)
		{
			system("clear");
			if (this->_contacts[convertedStringToInt - 1].isEmpty())
			{
				system("clear");
				std::cout << BRED << "This contact is empty" << RESET << std::endl;
			}
			else
				this->_contacts[convertedStringToInt - 1].printContact();
			flag = 1;
			printContacts();
			makeASelection();
			if (std::cin.eof())
				exit(1);
		}
		else
		{
			system("clear");
			std::cout << BRED << "Invalid Command. Exiting [SEARCH] feature ";
			std::cout << RESET << std::endl;
			menu();
		}
	}
}
