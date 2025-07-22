/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:00:06 by hali-mah          #+#    #+#             */
/*   Updated: 2025/07/22 14:13:34 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
  private:
    T* _elements;
    unsigned int _size;
  
  public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    const T& operator[](unsigned int index) const;
    T& operator[](unsigned int index);
    unsigned int size() const;
    class OutOfBoundsException : public std::exception
    {
        public:
            virtual const char* what() const throw() {
                return "Array index out of bounds";
            }
    };
};

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array& other) : _elements(NULL), _size(0)
{
    *this = other;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _elements;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] _elements;
        _size = other._size;
        if (_size > 0)
        {
            _elements = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _elements[i] = other._elements[i];
        } 
        else
            _elements = NULL;
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw OutOfBoundsException();
    }
    return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size) {
        throw OutOfBoundsException();
    }
    return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}


#endif