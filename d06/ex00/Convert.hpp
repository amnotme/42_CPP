/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:34:32 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/30 20:34:32 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <stdexcept>
# include <iostream>
# include <iomanip>


class Convert
{
	public:
		Convert(void);
		Convert(std::string input);
		~Convert(void);
		Convert(Convert const & src);
		Convert &operator=(Convert const & rhs);

	class Nan : public std::exception
		{
		public:
			Nan(void);
			Nan(std::string input);
			virtual ~Nan(void) throw ();
			Nan(Nan const & src);
			Nan &operator=(Nan const & rhs);

			virtual const char *what() const throw();
			// member functions
			bool checkInt( Convert &input );
			bool checkFloat( Convert &input );
			bool checkDouble( Convert &input );
			bool checkChar( Convert &input );

		};

	class Impos : public std::exception
		{
		public:
			Impos(void);
			Impos(std::string input);
			virtual ~Impos(void) throw();
			Impos(Impos const & src);
			Impos &operator=(Impos const & rhs);

			virtual const char *what() const throw();
			//member functions
			bool	checkInt( Convert &input );
			bool checkFloat( Convert &input );
			bool checkDouble( Convert &input );
			bool checkChar( Convert &input );
		};
	//getters
	std::string		getInput( void ) const ;
	int				getInt( void ) const ;
	float			getFloat( void ) const ;
	double			getDouble( void ) const ;
	char				getChar( void ) const ;

	//setters
	void				setInput( std::string  input ) ;
	void				setInt( int intVal ) ;
	void 			setFloat( float floatVal ) ;
	void 			setDouble( double doubleVal ) ;
	void				setChar( char charVal ) ;
	void				parseInput( char *argument );

	private:
		//Add your private methods

		//Add your private attributes below here
	std::string			_input;
	int					_convertInt;
	float				_convertFloat;
	double				_convertDouble;
	char					_convertChar;

};

#endif
