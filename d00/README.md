
# C++ Piscine Day OO  

## Notes on each exercise  

### ex00 - Megaphone  

###### Compilation Flags  

Using compilation flags in c++ like -pedantic-errors and -std=c++98 make the  
compiler turns off extensions and generates more warnings.  
Reading on [StackOverflow](https://stackoverflow.com/questions/2855121/what-is-the-purpose-of-using-pedantic-in-gcc-g-compiler)  

###### Headers & Libraries  

__cctype__ = Header that allows toupper() to be used  
__iostream__ = stream for input and output  

### ex01 - Awesome PhoneBook  

###### Headers & Libraries  

__Phonebook.hpp__ = Contains class Phonebook  
__Contact.hpp__ = Contains class Contact  
__Colors.hpp__ = Contains class Colors  
__iostream__ = stream for input and output  
__string__ = Header introduces string types, character traits and a set of converting functions  
		= substr(size_type pos = 0, size_type len = npos) const ;  
		= c_str() const ;  
		= getline(basic_istream<charT,traits>& is, basic_string<charT,traits,Alloc>& str) ; 
		= length()  const ;  
__sstream__ = Header providing string stream classes  
		= typedef basic_stringstream<char> stringstream ; 	This is an easy way to convert strings of  
			 digits into ints, floats or doubles. Following is a sample program using a stringstream  
			 to convert string to int.  
__iomanip__ = Header providing parametric manipulators   
		= setw (int n) ;  Sets the field width to be used on output operations.   

