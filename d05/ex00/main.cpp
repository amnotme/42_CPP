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

	try
	{
		ivan.incrementGrade();
		leo.decrementGrade();
		std::cout << ivan << std::endl;
		std::cout << leo << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{

	}
	catch (Bureaucrat::GradeTooHighException &e)
	{

	}

	return (0);
}
