#ifndef TEST_H
#define TEST_H
#include<iostream>

template<typename T>
struct Test
{
	void print(T param);
};

template<typename T>
void Test<T>::print(T param)
{
	std::cout<<param<<std::endl;
}
#endif

