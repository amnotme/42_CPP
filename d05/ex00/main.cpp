/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:50:17 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/28 22:50:34 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int 			main(void)
{
 	Bureaucrat leo("Leo", 150);
	Bureaucrat ivan("Ivan", 1);
	std::cout << leo << std::endl;
	std::cout << ivan << std::endl;

	try
	{
		Bureaucrat leoTooHigh("Leo2", 151);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ivanTooLow("Ivan2", 0);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	//will throw Bureaucrat::GradeTooLowException();
	try
	{
		leo.decrementGrade();
		std::cout << leo << std::endl;
		std::cout << ivan << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	//will throw Bureaucrat::GradeTooHighException();
	try
	{
		ivan.incrementGrade();
		std::cout << leo << std::endl;
		std::cout << ivan << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	//will execute adequately and return control back to the user.
	try
	{
		ivan.decrementGrade();
		leo.incrementGrade();
		std::cout << leo << std::endl;
		std::cout << ivan << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
