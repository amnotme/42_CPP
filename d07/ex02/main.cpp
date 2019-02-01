/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 21:59:10 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/31 22:02:06 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.cpp"
# include <iostream>

int			main(void)
{
	unsigned int a = 2;
	Array<int> int_array(a);
	std::cout << int_array.size() << std::endl;
	int_array.setElem(0, 25);
	int_array.setElem(1, 26);
	std::cout << int_array[1] << std::endl;
	std::cout << int_array[2] << std::endl;

	Array<float> float_array;
	std::cout << float_array.size() << std::endl;

	return (0);
}
