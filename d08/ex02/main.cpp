/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 22:38:21 by lhernand          #+#    #+#             */
/*   Updated: 2019/02/01 22:47:19 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Mutantstack.hpp"

int			main( void )
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << BRED <<  mstack.top() << RESET << std::endl;
	mstack.pop();
	std::cout << BYELLOW <<  mstack.size() << RESET << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	// this will print them in order
	mstack.printSet();
	// the following lines are not necessary if using printSet();
	// will be left there for demo purposes.
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
     //
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	std::stack<int> s(mstack);
	return (0);
}
