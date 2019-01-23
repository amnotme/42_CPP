/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 02:55:12 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 02:55:13 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak(void)
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete (panthere);
}

int	main(void)
{
	memoryLeak();
	while (1);
	return (0);
}
