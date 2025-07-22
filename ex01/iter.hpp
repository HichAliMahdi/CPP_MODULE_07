/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:37:48 by hali-mah          #+#    #+#             */
/*   Updated: 2025/07/22 13:46:27 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F>
void iter(T* array, int l, F function)
{
    for (int i = 0; i < l; i++)
    {
        function(array[i]);
    }
}

void printNumber(int n)
{
    std::cout << n << " ";
}

void printString(std::string str)
{
    std::cout << str << " ";
}
#endif