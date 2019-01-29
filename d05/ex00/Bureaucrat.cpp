/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:50:08 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/28 22:50:08 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}
Bureaucrat::Bureaucrat(std::string name, int grade) :
_name(name),
_grade(grade)
{
	return ;
}
Bureaucrat::~Bureaucrat(void)
{
	return ;
}
Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src ;
}
Bureaucrat		&Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}
int 			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

void 	 	Bureaucrat::setName(std::string const name)
{
	this->_name = name;
}
void 		Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

void 		Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->getGrade() - 1 < 1)
			throw (Bureaucrat::GradeTooLowException::what())
		else
			this->_grade =- 1;
	}
	catch (std::exception &e)
	{
		;
	}

}
void 		Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->getGrade() + 1 > 150)
			throw (Bureaucrat::GradeTooHighException::what())
		else
			this->_grade += 1;
	}
	catch (std::exception &e)
	{
		;
	}
}


std::ostream	&operator<<(std::ostream &out, Bureaucrat const & rhs)
{
	out << GREEN << "<" << BCYAN << rhs.getName() << GREEN << ">" << BYELLOW
	 	<< " bureaucrat grade " << GREEN << "<" << BRED << rhs.getGrade() << GREEN << ">";
	return (out);
}





Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void)
{
	return ;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src ;
}
Bureaucrat::GradeTooHighException		&Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}
const char *Bureaucrat::GradeTooHighExeption::what() const throw()
{
	return ("The level can't be that high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void)
{
	return ;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src ;
}
Bureaucrat::GradeTooLowException		&Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}
const char *Bureaucrat::GradeTooLowExeption::what() const throw()
{
	return ("The level can't be that low");
}
