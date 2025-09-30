
#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	array = new T[0];
	arraySize = 0;
}

template <typename T>
Array<T>::Array(unsigned int len){
	array = new T[len];
	arraySize = len;
}

template <typename T>
Array<T>::Array(Array const &copy){
	arraySize = copy.arraySize;
	array = new T[arraySize];
	for (unsigned int i = 0; i < arraySize; i++)
		array[i] = copy.array[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &copy){
	arraySize = copy.arraySize;
	array = new T[arraySize];
	for (unsigned int i = 0; i < arraySize; i++)
		array[i] = copy.array[i];
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i){
	if (i >= arraySize)
		throw std::out_of_range("Index out of range.");
	return (array[i]);
}

template <typename T>
T	&Array<T>::operator*(void)const{
	return (*array);
}

template <typename T>
Array<T>::~Array(){
	delete[] array;
}

// FUNCTIONS
template <typename T>
unsigned int	Array<T>::size(void)const{
	return (arraySize);
}
