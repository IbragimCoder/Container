#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>

template<typename T> 
void print(const T& container, const std::string& delim)
{
	auto iter = container.begin();
	if (iter != container.end())
	{
		std::cout << *iter;
		iter++;
	}
	while (iter != container.end())
	{
		std:: cout << delim << *iter;
		iter++;
	}
}


int main()
{
	std::list<int> l = {2,4,6,8}; // допустим list
	print(l, ", ");
	
	return 0;
}

