#include <iostream>

class book
{
	private:
		std::string title;
	public:
		void setitle(const std::string &title);
		const std::string &getitle() const;
		void printTitle();
		book();
};
book::book()
{
	// NADA
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
	bo1.setitle("le petit rouge");
	bo1.printTitle();

	book bo2 = bo1;
	bo2.setitle("le petit blue ");
	bo2.printTitle();

	book bo3(bo2);
	bo3.setitle("le petit vert ");
	bo3.printTitle();
	return 0;
}