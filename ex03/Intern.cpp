#include  "Intern.hpp"

AForm  *Intern::makeForm(std::string  name, std::string target)
{
    char x =  name[0];
    AForm  *form  =  nullptr;
    switch (x)
    {
        case 'P' :
               form  = new PresidentialPardonForm(target);  
        case 'R' :
               form = new  RobotomyRequestForm(target);
        case 'S' :
               form = new ShrubberyCreationForm(target);
        default :
            std::cout <<  "THe Form Does Not Exist\n";

    }
    if(form != nullptr)
        std::cout <<  "Intern Creates " << name <<  std::endl; 
    return form;
}