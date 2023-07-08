/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:29:06 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/07/08 16:29:23 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}

/*
class Awesome {
    public:
        Awesome() : _n(42) {return;};
        Awesome(int n) : _n(n) {return;};
		Awesome &operator=(Awesome &a) {_n = a._n; return *this;}
		bool operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
		bool operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
		bool operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
		bool operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
		bool operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
		bool operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}
        int get() const {return this->_n;};

    private:
        int    _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const &rhs) {o << rhs.get(); return o;}

template<typename T>
void print (T const &x) {std::cout << x << std::endl; return;}

int main() {
    Awesome a(2), b(4);
	std::cout << a << " " << b <<std::endl;	
	swap(a, b);
	std::cout << a << " " << b <<std::endl;	
	std::cout << "max: " << max(a, b) <<std::endl;	
	std::cout << "min: " << min(a, b) <<std::endl;	

    return 0;
}
*/