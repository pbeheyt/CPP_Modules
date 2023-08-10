/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:43:29 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/08/10 22:18:10 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    MutantStack<int> mstack;

    // Pushing elements onto the stack
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(8);
    mstack.push(10);

    // Using iterator to print elements
    std::cout << "Using iterator:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Using reverse iterator to print elements
    std::cout << "Using reverse iterator:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
    std::cout << "First element: " << *it << std::endl;

    ++it;
    std::cout << "Second element: " << *it << std::endl;

    it = mstack.end();
    --it;
    std::cout << "Last element: " << *it << std::endl;

    return 0;
}

/*
int main()
{
	std::cout << "---MUTANTSTACK---" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;

	// std::cout << "---LIST---" << std::endl;
    // std::list<int> myList;
    // myList.push_back(5);
    // myList.push_back(17);
    
    // std::list<int>::iterator it = myList.begin();
    // std::list<int>::iterator ite = myList.end();
    
    // std::cout << myList.back() << std::endl;
    // myList.pop_back();
    // std::cout << myList.size() << std::endl;
    // myList.push_back(3);
    // myList.push_back(5);
    // myList.push_back(737);
    // //[...]
    // myList.push_back(0);
    
    // ++it;
    // --it;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    
    // std::stack<int, std::list<int> > s(myList);
	// std::cout << std::endl;

	return 0;
}
*/
