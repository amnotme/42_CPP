/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 22:56:52 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/29 22:57:53 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(void)
{
	return ;
}
Form::Form( std::string const name, bool sign, int const gradeSign, int const gradeExec )
{
	if (gradeSign < 1 || gradeExec < 1)
		throw( Form::GradeTooHighException());
 	else if ( gradeSign > 150 || gradeExec > 150 )
		throw( Form::GradeTooLowException());
	else
	{
		this->_name = name;
		this->_gradeSign = gradeSign;
		this->_gradeExec = gradeExec;
		this->_sign = false;
	}
	return ;
}
Form::~Form(void)
{
	return ;
}
Form::Form(Form const & src)
{
	*this = src ;
}
Form		&Form::operator=(Form const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_sign = rhs._sign;
	this->_gradeSign = rhs._gradeSign;
	this->_gradeExec = rhs._gradeExec;
	return (*this);
}

//setters

std::string 			Form::getName( void ) const {
	return (this->_name);
}

bool 				Form::getSign( void ) const {
	return (this->_sign);
}

int 					Form::getGradeSign( void ) const {
	return (this->_gradeSign);
}

int 					Form::getGradeExec( void ) const {
	return (this->_gradeExec);
}

//setters

void 				Form::setName( std::string const name ) {
	this->_name = name;
}

void 				Form::setSign( bool sign ) {
	this->_sign = sign;
}

// member Functions

void 				Form::setGradeSign( int const gradeSign ) {
	if (gradeSign < 1) {
		throw(GradeTooHighException());
	} else if (gradeSign > 150) {
		throw(GradeTooLowException());
	} else {
		this->_gradeSign = gradeSign;
	}
}

void 				Form::setGradeExec( int const gradeExec ) {
	if (gradeExec < 1) {
		throw(GradeTooHighException());
	} else if (gradeExec > 150) {
		throw(GradeTooLowException());
	} else {
		this->_gradeExec = gradeExec;
	}
}

bool 				Form::beSigned( Bureaucrat const &obj )  {
	if (obj.getGrade() < this->_gradeSign) {
		return (true);
	}	else {
		throw(GradeTooLowException());
	}
	return (false);
}

//GradeTooLowException
Form::GradeTooLowException::GradeTooLowException( void ) {
	 return ;
}

Form::GradeTooLowException::GradeTooLowException( Form::GradeTooLowException const & other ) {
	*this = other;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw() {
	return ;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=( Form::GradeTooLowException const & rhs ) {
	static_cast< void >(rhs);
	return (*this);
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("\033[1;3mForm cannot be signed because Bureaucrat's Grade is Too Low\033[0m");
}

//GradeTooHigh
Form::GradeTooHighException::GradeTooHighException( void ) {
	return ;
}

Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const & other ) {
	*this = other;
	return ;
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw() {
	 return ;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=( GradeTooHighException const & rhs )  {
	static_cast< void >(rhs);
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("\033[1;31mToo High...\033[0m");
}


//ostream
std::ostream &operator<< (std::ostream &o, Form const &rhs) {
    o << CYAN << rhs.getName() << BYELLOW << ", Form was signed with a grade higher than  " << BRED << rhs.getGradeSign()
			<< RESET << std::endl;
    return (o);
	}
