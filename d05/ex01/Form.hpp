/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 22:56:52 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/29 22:56:52 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include "Colors.hpp"
# include <stdexcept>
# include <string>
class Bureaucrat;
class Form
{
	public:
		Form(void);
		Form( std::string const name, bool sign, int const gradeSign, int const gradeExec );
		~Form(void);
		Form(Form const & src);
		Form &operator=(Form const & rhs);
		//Add your public methods below here

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException(GradeTooLowException const & src);
				GradeTooLowException &operator=(GradeTooLowException const & rhs);

				virtual const char *what() const throw ();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException(GradeTooHighException const & src);
				GradeTooHighException &operator=(GradeTooHighException const & rhs);

				virtual const char * what() const throw();
		};

		std::string				getName( void ) const ;
		bool						getSign( void ) const ;
		int						getGradeSign( void ) const ;
		int						getGradeExec( void ) const ;

		//setters

		void 					setName( std::string const name ) ;
		void 					setSign( bool sign );

		//member fucntions

		void 					setGradeSign( int const gradeSign );
		void 					setGradeExec( int const gradeExec );
		bool 					beSigned( Bureaucrat const &obj );
	private:
		//Add your private methods

		//Add your private attributes below here
		std::string				_name;
		bool						_sign;
		int						_gradeSign;
		int						_gradeExec;

};
std::ostream  &operator<<(std::ostream &out, Form const &rhs);
#endif
