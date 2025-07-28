/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:08:26 by hali-mah          #+#    #+#             */
/*   Updated: 2025/07/28 15:32:34 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    Array<int> numbers(5);
    std::cout << "Created array of 5 integers, size: " << numbers.size() << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = i * 10;
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }
    Array<int> copy = numbers;
    std::cout << "Copy created, size: " << copy.size() << std::endl;

    copy[0] = 999;
    std::cout << "After modifying copy:" << std::endl;
    std::cout << "Original numbers[0] = " << numbers[0] << std::endl;
    std::cout << "Copy copy[0] = " << copy[0] << std::endl;

    Array<std::string> words(3);
    words[0] = "Hello";
    words[1] = "World";
    words[2] = "!";

    std::cout << "String array: ";
    for (unsigned int i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << " ";
    }
    std::cout << std::endl;
    try
    {
        std::cout << "Trying to access out of bounds..." << std::endl;
        std::cout << numbers[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
