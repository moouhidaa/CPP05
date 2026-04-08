In  a case  i don't  know the exact  time  that  you  reached  that  repositor "good  morning" and  "good afternoon" and "good night"\n

-> Little  brief of the module CPP05
Basically the module is teaching you how to design a class hierarchy — abstract
interface at the top, concrete implementations below, and everything talking through the base class


ex00 — Bureaucrat
Just one class with a grade (1–150), throws exceptions if grade is too high or too low. Teaches you basic exception handling with nested classes like GradeTooHighException.

ex01 — Form
Added a Form class (later renamed AForm) with a grade to sign and grade to execute.
Bureaucrat can signForm() — if his grade is high enough, form gets signed. Teaches you how two classes interact and throw exceptions between them.

ex02 — Concrete Forms
Made AForm abstract with a pure virtual execute(). Then created 3 real forms:

ShrubberyCreationForm — writes ASCII trees to a file
RobotomyRequestForm — prints robotomy message (50% success)
PresidentialPardonForm — pardons the target

Teaches polymorphism — all 3 are handled through the AForm* pointer.

ex03 — Intern
Added an Intern class with a makeForm(name, target) method that creates the right form based on the name string and returns an AForm*.
Teaches you how to create objects dynamically and return them through a base class pointer — which is exactly what you were just asking about.
