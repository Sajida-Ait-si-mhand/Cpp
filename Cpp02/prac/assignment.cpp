// assingment : u changin the value are already existing based on other object 
// copy : is used when u are creator a new obj based on other obj 

#include <iostream>

class Book
{	
	public :
	std::string title;
	std::string author;
	int pages;
	// Book();
	// Book(const int &other);
	Book& operator=(const Book& other)
	{
		this->title = other.title;
		this->author = other.author;
		this->pages = other.pages;
		return *this;
	}
};

int main()
{
	Book b1;
	b1.author = "Orwell";
	b1.pages = 300;
	b1.title = "1984";
	Book b2;
	b2 = b1;
	std::cout << b2.author << std::endl;
	return 0;
}