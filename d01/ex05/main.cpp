/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:53:49 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 22:53:50 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int 			main(void)
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	// std::cout << bob.getBrain().identify() << std::endl;

	return (0);
}
