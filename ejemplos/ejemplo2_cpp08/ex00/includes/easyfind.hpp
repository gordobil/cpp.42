/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:53:36 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/15 13:09:54 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>
#include <vector>

template <typename T>
size_t	easyfind(const std::vector<T>& myvector, const T& target);

/*	
	size_t: This is the type of data the function will return.
	
	easyfind: Name of the function.

	const std::array<T, N>& arr: This is the first parameter for the function.
		std::array<T, N>: The type of the parameter is an array with elements of type T and a size of N.
		const: This keyword is very important. It means the function is not allowed to change the contents of the array. This is good practice.
		&: Reference operator. It means that the function is receiving a reference to the original array and not making a full copy of it.
		myarray: Name of the variable.

	const T& target: This is the second parameter.
		It's the value to search. It also uses a const and & for the same reasons as the array parameter.
		
*/

#include "easyfind.tpp"
