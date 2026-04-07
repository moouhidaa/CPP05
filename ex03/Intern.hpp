#pragma  once  
#include <string>
#include  "AForm.hpp"
#include  "PresidentialPardonForm.hpp"
#include  "Bureaucrat.hpp"
#include  "ShrubberyCreationForm.hpp"
#include  "RobotomyRequestForm.hpp"

class Intern
{
    public:
     AForm    *makeForm(std::string name , std::string target);
};