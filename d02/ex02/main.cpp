/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:06:21 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 10:07:03 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << BGREEN;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << RESET;
	std::cout << BYELLOW;
	std::cout << max( a, b ) << RESET << std::endl;

	Fixed  c(1000.5f);
	Fixed  d(10);
	Fixed const e(Fixed(10) * Fixed(10));
	Fixed const f(Fixed(1.0f) * Fixed(0.5f));
	Fixed const g(Fixed(c) / Fixed(d));
	Fixed  x(42.42f);
	Fixed  y(21.21f);

	bool ansa = x == y;
	bool ansb = x != y;
	bool ansc = x < y;
	bool ansd = x > y;
	bool anse = x <= y;
	bool ansf = x >= y;

	std::cout << BPURPLE;
	std::cout << "42.42 == 21.21 Should be False: " << ansa << std::endl;
	std::cout << "42.42 != 21.21 Should be True: " << ansb << std::endl;
	std::cout << "42.42 <  21.21 Should be False: " << ansc << std::endl;
	std::cout << "42.42 >  21.21 Should be True: " << ansd << std::endl;
	std::cout << "42.42 <= 21.21 Should be False: " << anse << std::endl;
	std::cout << "42.42 >= 21.21 Should be True: " << ansf << std::endl;
	std::cout << RESET;

	std::cout << BGREEN;
	std::cout << "this is a: " << a << std::endl;
	std::cout << "this is b: " << b << std::endl;
	std::cout << "this is c: " << c << std::endl;
	std::cout << "this is d: " << e << std::endl;
	std::cout << "this is e: " << f << std::endl;
	std::cout << "this is g: " << g << std::endl;
	std::cout << BYELLOW;
	std::cout << "max (a, b): " << max( a, b ) << std::endl;
	std::cout << "min (a, b): " << min( a, b ) << RESET;
	std::cout << std::endl;

	return 0;
}
