/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 00:18:42 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/31 02:39:48 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Colors.hpp"
# include "whatever.cpp"
# include <iostream>
# include <string>


int main( void ) {
	int a = 2;
	int b = 3;

	::swap(a, b);

	std::cout << BGREEN << "a = " << BCYAN << a << BGREEN << ", b = " << BCYAN << b << std::endl;
	std::cout << BRED << "min( a, b ) = " << BCYAN << ::min( a, b ) << std::endl;
	std::cout << BPURPLE <<  "max( a, b ) = " << BCYAN << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << BGREEN << "c = " << BCYAN << c << BGREEN << ", d = " << BCYAN << d << std::endl;
	std::cout << BRED << "min( c, d ) = " << BCYAN << ::min( c, d ) << std::endl;
	std::cout << BPURPLE << "max( c, d ) = " << BCYAN << ::max( c, d ) << std::endl;

	return 0;
}
