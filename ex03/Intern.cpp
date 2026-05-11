#include  "Intern.hpp"

AForm* president(std::string  target)
{
    return new  PresidentialPardonForm(target);
}

AForm* robot(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* shrubbery(std::string target)
{
    return  new  ShrubberyCreationForm(target);
}


AForm *Intern::makeForm(std::string  name,std::string  target)
{
    std::string  names[3] = {"PresidentialPardonForm",
                                "RobotomyRequestForm",
                                "ShrubberyCreactionForm"};
    
    AForm *(*forms[3])(std::string target) = {&president, &robot, &shrubbery};
    for(int i = 0;i < 3 ;i++)
    {
        if(names[i] == name)
        {
            std::cout <<  "Intern create " << name << std::endl;
            return forms[i](target);
        } 
    }
    return  NULL;
}