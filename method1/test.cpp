#include"test.h"
#include<iostream>

template<typename T>
void Test<T>::print(T param)
{
	std::cout<<param<<std::endl;
}

template class Test<int>;
