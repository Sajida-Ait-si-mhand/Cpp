#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal j =  Dog();
    const Animal i =  Cat();

    std::cout << j.getType() << " makes sound: ";
    j.makeSound();

    std::cout << i.getType() << " makes sound: ";
    i.makeSound();


    return 0;
}
