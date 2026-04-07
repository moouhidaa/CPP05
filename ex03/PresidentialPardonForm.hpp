#pragma once
#include <string>
#include <iostream>
#include  "Bureaucrat.hpp"


class  PresidentialPardonForm: public AForm
{
    private:
        std::string  target;
    public:
        std::string  Get_target() const;
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm & Pr);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &Pr);
        void execute(Bureaucrat const &executor) const ;
        ~PresidentialPardonForm();
};