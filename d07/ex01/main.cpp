/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:40:38 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/31 21:22:14 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.cpp"
# include <iostream>
# include <string>

int			main( void ) {
	int a[] = {1, 2, 3, 4, 5};
	float b[] = {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};
	double c[] = {2.0, 4.0, 6.0, 8.0, 10.0};
	char d[] = {33, 34, 35, 36, 37};
	std::string e[] = {"hello", "it's", "freaking", "late", "now"};

	iter<int>(a, array_size(a), plusTwo);
	std::cout << std::endl;
	iter<float>(b, array_size(b), plusTwo);
	std::cout << std::endl;
	iter<double>(c, array_size(c), plusTwo);
	std::cout << std::endl;
	iter<char>(d, array_size(d), plusTwo);
	std::cout << std::endl;
	iter<std::string>(e, array_size(e), plusTwo);
	std::cout << std::endl;
	
	const int ee[] = {1, 2, 3, 4, 5};
	const float f[] = {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};
	const double g[] = {2.0, 4.0, 6.0, 8.0, 10.0};
	const char h[] = {33, 34, 35, 36, 37};

	iter<int const>(ee, array_size(ee), plusTwo);
	std::cout << std::endl;
	iter<float const>(f, array_size(f), plusTwo);
	std::cout << std::endl;
	iter<double const>(g, array_size(g), plusTwo);
	std::cout << std::endl;
	iter<char const>(h, array_size(h), plusTwo);
	std::cout << std::endl;
	
	return (0);
}

