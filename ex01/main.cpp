/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:38:58 by hali-mah          #+#    #+#             */
/*   Updated: 2025/07/28 14:47:25 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void printNumber(int n)
{
    std::cout << n << " ";
}

void printString(std::string str)
{
    std::cout << str << " ";
}

int main(void)
{
    int numArray[] = {1, 2, 3, 4, 5};
    std::cout << "Numbers: ";
    ::iter(numArray, 5, printNumber);
    std::cout << std::endl;
    std::string wordsArray[] = {"My", "name", "is", "hichem"};
    std::cout << "Words: ";
    ::iter(wordsArray, 4, printString);
    std::cout << std::endl;
    return 0;
}