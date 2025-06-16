

# C++

<img src="./images/Why C++ is so popular among game developers_ _ Geekboots.jpeg" width="800">

## Module 00:
    Module 00 is designed as Day 1 of your OOP education, giving you the essential vocabulary and basic tools you need before moving on to more advanced OOP concepts like inheritance, polymorphism, operator overloading, etc. in the subsequent modules.
    In this module we are going to learn Namespace,  classes, member functions, stdio streams,
    initialization lists, static, const, and some other basic stuf

## The purpose of OOP :
    Write code once, use it many times through classes and objects
    Reduces code duplication and development time
    Makes code more intuitive and easier to understand

## Some vids:

| Topic               | Link |
|---------------------|------|
| 🚁 C++ OOP - Introduction to classes and objects for beginners| [Watch here](https://www.youtube.com/watch?v=iVLQeWbgbXs&list=PL43pGnjiVwgTJg7uz8KUGdXRdGKE0W_jN&ab_channel=CodeBeauty) |    
| 🚁 Bro code           | [Watch here](https://www.youtube.com/watch?v=-TkoO8Z07hI&ab_channel=BroCode) |    
| 🚁 One of the best courses     | [Watch here](https://www.youtube.com/watch?v=ZzaPdXTrSb8&ab_channel=ProgrammingwithMosh) |     
 





<!-- -------------------------------------------------------------------------

# what is OOP
# how can OOP will help me in my project 
======= -->


Let's go to learn new things:   
# Namespace:
    This helps you to have same name function without any throwing any errors
    ## More Complex C++ Examples

**Class Example:**
```markdown
```cpp
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
``` 
## Where are we going to use it in this module?
The exercises don't require you to create custom namespaces. You'll focus on:

    Classes (PhoneBook, Contact, Account)
    Member functions    
    Standard library usage  
*Required by rules*: Document forbids using namespace std;  
*Remember: Every time you use standard library features, you MUST prefix them with std:: -  this is your main namespace usage in Module 00!*    
## What is the relation between STD and NAMESPACE:  
    std is a standard of namespace in c++           
    std : standart library namespace    
```cpp
1.  namespace std {
    // All standard library stuff lives here
    class string { /* ... */ };
    class cout_type { /* ... */ };
    class cin_type { /* ... */ };
    // thousands of other standard library components
}
2.  
    :: = Scope Resolution Operator  
    :: is used to access things inside a namespace  
    std::    means "access something from the std namespace"    
``` 

# Now we are done with Namespace 👌

## What is a Classe ?


A class is a blueprint or template for creating objects. It defines:
    Data (attributes/member variables)  
    Behavior (methods/member functions) 

So if you hear methods that means they are going a Behavior and vice verca 

```cpp
class ClassName {
    private:
    // Private members (only accessible within the class)

    public:
    // Public members (accessible from outside the class)

    protected:
    // Protected members (accessible in derived classes we will know more about it ) 
};
```

```cpp
// BAD - Without encapsulation
struct BadContact {
    std::string firstName;  // Anyone can modify directly
    std::string phoneNumber;
};

int main() {
    BadContact contact;
    contact.firstName = "";      // Oops! Empty name allowed
    contact.phoneNumber = "abc"; // Oops! Invalid phone number
} 
```

```cpp
// GOOD - With encapsulation
class GoodContact {
private:
    std::string firstName;
    std::string phoneNumber;
    
public:
    void setFirstName(const std::string& name) {
        if (!name.empty()) {
            firstName = name;
        } else {
            std::cout << "Error: Name cannot be empty!" << std::endl;
        }
    }
};
```

# Classes are the foundation of OOP - they let you create your own data types with custom behavior!
```cpp
// Creating a custom data type called "Person"
class Person {
private:
    std::string name;
    int age;
    double height;

public:
    // Constructor
    Person(std::string n, int a, double h) : name(n), age(a), height(h) {}
    
    // Methods
    void introduce() {
        std::cout << "Hi, I'm " << name << ", " << age << " years old" << std::endl;
    }
    
    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
};

// Now "Person" is your custom data type!
int main() {
    Person john("John", 25, 175.5);  // Create object of your custom type
    Person mary("Mary", 30, 165.0);  // Another object
    
    john.introduce();  // Use your custom type
    mary.introduce();
    
    return 0;
}
```

## Key OOP Principles:

1. Encapsulation: Hide internal details, expose only what's necessary   
2. Inheritance  : Create new classes based on existing ones    
3. Polymorphism : Same interface, different implementations    
4. Abstraction  : Focus on what an object does, not how it does it

---------

 **they're teaching you how to think like a software architect, not just a coder **       
Wa_hassan </>                  