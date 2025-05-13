#include <iostream>

class book
{
	private:
		std::string title;
	public:
		void setitle(const std::string &title);
		const std::string &getitle() const;
		void printTitle();
		book(); //default constrctor 
		book(const book &chihaja); //Cpy one
};
book::book()
{
	std::cout << " \033[0;33m DEFAULT CONSTRUCTER \033[0m " << std::endl;
}
// copy constructor:
book::book(const book &chihaja)
{
	this->title = chihaja.title;
	std::cout << "copy constructer was here hihi" << std::endl;
}
void book::setitle(const std::string &title)
{
	this->title = title;
}

const std::string &book::getitle() const
{
	return (this->title);
}

void book::printTitle()
{
	std::cout << "title is :" << this->title << std::endl;
}
int main()
{
	book bo1;
	bo1.setitle("je suis le rouge");
	bo1.printTitle();

	book bo2 = bo1;
	bo2.setitle("je suis le blue ");
	bo2.printTitle();

	book bo3(bo2);
	bo3.setitle("je suis le vert ");
	bo3.printTitle();
	return 0;
}