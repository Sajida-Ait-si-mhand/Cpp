#include <iostream>

namespace Grade3
{
	void alex()
	{
		std::cout << " I am alex from 3nd Grade" << std::endl;
	}
}

namespace Grade2
{
	void alex()
	{
		std::cout << " I am alex from 2nd Grade" << std::endl;
	}
}

int main()
{

	Grade3::alex();
	Grade2::alex();
	return 0;
}