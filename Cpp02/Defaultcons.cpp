#include <iostream>


class PP
{
	public:
		std::string name;
		int age;
		std::string email;
		// constructor default 
		PP (){
			name = "sojod";
			age = 20;
			email = name + ".com";
		}
		// pram constructor 
		PP(std::string name, int age, std::string email) {
			this->name = name;
			this->age = age;
			this->email =email;
		}
};
void getinfo(PP U)
{
	std::cout << "NAME:  " << U.name << std::endl;
	std::cout << "age:  " << U.age << std::endl;
	std::cout << "email:  " << U.email << std::endl;
}

int main()
{
	PP class1;
	PP fd("Sajida", 21, "HELO@GMIAL>CON");
	PP fa("Sajida", 21, "HELO@GMIAL>CON");

	getinfo(class1);
	getinfo(fd);
	getinfo(fa);
	
}