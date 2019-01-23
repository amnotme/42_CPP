/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:56:06 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/22 23:59:53 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include "Colors.hpp"
# include <iostream>
# include <string>
# include <unistd.h>

class Pony
{
	public:

	Pony(void);
	Pony(std::string const name, std::string const color, int  const age);
	~Pony(void);
	Pony(Pony const & src);
	Pony &operator=(Pony const & rhs);

	std::string 		getName(void) const;
	std::string 		getColor(void) const;
	int 				getAge(void) const;

	void 			setName(std::string const name);
	void 			setColor(std::string const color);
	void 			setAge(int const age);

	private:
	std::string 		_name;
	std::string		_color;
	int 				_age;
};

Pony					*ponyOnTheHeap(void);
Pony					ponyOnTheStack(void);
#endif
