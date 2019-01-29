/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:50:08 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/28 22:50:08 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Colors.hpp"
# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat &operator=(Bureaucrat const & rhs);
		//Add your public methods below here
		std::string	getName(void) const;
		int 			getGrade(void) const;
		void 		setName(std::string const name);
		void 		setGrade(int grade);
		void 		incrementGrade(void);
		void 		decrementGrade(void);

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			~GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & src);
			GradeTooHighException &operator=(GradeTooHighException const & rhs);

			const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void);
			~GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & src);
			GradeTooLowException &operator=(GradeTooLowException const & rhs);
			const char * what() const throw();
	};

	private:
		//Add your private methods

		//Add your private attributes below here
		int 			_grade;
		std::string	_name;
};

std::ostream  		&operator<<(std::ostream &out, Bureaucrat const & rhs);

#endif
