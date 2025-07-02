## Exception Handling 
This is the big one for this module. You need to understand how **try**, **catch**, and **throw** work in C++	
**Custom exception classes (like GradeTooHighException) and how	 they inherit from std::exception**	
When and why to **throw exceptions vs. returning error codes**	

## Inheritance and Polymorphism

Exercise 02 introduces abstract base classes (AForm becomes abstract	)
You'll need virtual functions and pure virtual functions	
Understanding how derived classes override base class behavior	

## Orthodox Canonical Form

The document mentions this requirement - it's the "rule of four" in C++98	
Default constructor, copy constructor, assignment operator, and destructor	
Critical for proper memory management and object behavior	

## What Each Exercise Builds Toward
### Exercise 00: Bureaucrat Class

Start here to understand basic exception throwing	
Grade validation (1-150 range, where 1 is highest)	
Getter functions and operator overloading (<< operator)	

### Exercise 01: Form Class

Introduces interaction between classes	
Forms have signing requirements based on bureaucrat grades	
More complex exception scenarios	

### Exercise 02: Concrete Form Types

This is where inheritance shines - AForm becomes abstract	
Three specific form types with different behaviors	
File I/O (for ShrubberyCreationForm)	
Randomization (for RobotomyRequestForm)	

### Exercise 03: Intern Class

Factory pattern implementation	
Dynamic object creation based on string parameters	
The document warns against "if/elseif/else forests" - think about cleaner approaches	

## Key Design Challenges to Think About

Grade Logic: Remember that grade 1 is higher than grade 2 (counter-intuitive!)	
Exception Strategy: Decide whether to validate in base classes or derived classes	
Factory Pattern: For the Intern class, you'll need a clean way to create 	different form types without messy conditional chains	
Abstract Base Classes: Understanding when and how to make a class abstract	

## Questions to Ask Yourself Before Starting

Do I understand why exceptions are better than error codes in this context?		
Can I explain the difference between signing a form and executing it?			
How will inheritance help me avoid code duplication across the three form types?			
What's the cleanest way to implement the factory pattern for the Intern class?		

The project builds complexity gradually, so make sure each exercise works perfectly before moving to the next. The real learning happens in understanding why each design choice makes the code more maintainable and robust.