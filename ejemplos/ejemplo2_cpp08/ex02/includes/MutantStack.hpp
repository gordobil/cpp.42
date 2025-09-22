/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:15:37 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/19 10:23:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
	private:
	
	protected:
	
	public:
		MutantStack();
		MutantStack(const MutantStack& original);
		~MutantStack();

		MutantStack& operator=(const MutantStack& other);

		// typename MutantStack<T>::container_type::iterator iterator;				//	This is the full verbose version of the type
		typedef typename MutantStack<T>::container_type::iterator iterator;			//	Instead of writing the full verbose type each time, alias it.
		iterator begin();															//	Profit! :o)
		iterator end();
		
		// typename MutantStack<T>::container_type::reverse_iterator rev_reverse_iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin();
		reverse_iterator rend();
		
		// typename MutantStack<T>::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
		const_iterator begin() const;
		const_iterator end() const;
		
		// typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};
		   
#include "MutantStack.tpp"