/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:06:06 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 10:06:08 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"
# define RESET "\033[0m"

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);
		Fixed(Fixed const & src);
// operators

		Fixed &operator=(Fixed const & rhs);
//arithmetic
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);
//increments and decrements
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
//booleans
		bool operator==(Fixed const & rhs) const;
		bool	operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		int 					getRawBits(void) const;
		int 					toInt(void) const;
		float 				toFloat(void) const;
		void 				setRawBits(int const raw);

	private:
		int					_fixedNumber;
		static const uint8_t 	_bits;
};

Fixed 		&min(Fixed & lhs, Fixed & rhs);
Fixed const	&min(Fixed const & lhs, Fixed const & rhs);
Fixed 		&max(Fixed & lhs, Fixed & rhs);
Fixed const 	&max(Fixed const & lhs, Fixed const & rhs);
std::ostream			&operator<<(std::ostream & lhs, Fixed const & rhs);
#endif
