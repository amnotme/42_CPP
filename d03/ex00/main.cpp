/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 01:40:43 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 01:40:46 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int 			main(void)
{
	FragTrap  f1("Leo");
	FragTrap  f2;
	FragTrap  f3 = f2;
	f1.printStats();
	f2.printStats();
	f3.printStats();
	return (0);
}
