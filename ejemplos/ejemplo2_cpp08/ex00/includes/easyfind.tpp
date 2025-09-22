/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:02:54 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/19 10:42:20 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <algorithm>
#include <stdexcept>
#include <iterator>

template <typename T>
size_t easyfind(const std::vector<T>& myvector, const T& target)
{
	typename std::vector<T>::const_iterator it = std::find(myvector.begin(), myvector.end(), target);
	    
	if (it != myvector.end())									
		return (std::distance(myvector.begin(), it));

	throw std::runtime_error("Exception: Target value not found");
}

