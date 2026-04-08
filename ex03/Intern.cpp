#include  "Intern.hpp"

AForm  *Intern::makeForm(std::string  name, std::string target)
{
    char x =  name[0];
    AForm  *form  =  0;
    switch (x)
    {
        case 'P' :
               form  = new PresidentialPardonForm(target);
               break;
        case 'R' :
               form = new  RobotomyRequestForm(target);
               break;
        case 'S' :
               form = new ShrubberyCreationForm(target);
               break;
        default :
            std::cout <<  "THe Form Does Not Exist\n";

    }
    if(form != 0)
        std::cout <<  "Intern Creates " << name <<  std::endl;
    return form;
}