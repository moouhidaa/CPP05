#pragma once
#include <string>
#include <iostream>
#include  <fstream>
#include  "Bureaucrat.hpp"
#include  "AForm.hpp"

class  ShrubberyCreationForm: public AForm
{
    private:
        std::string  target;
    public:
        std::string  Get_target() const;
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm & Pr);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &Pr);
        void execute(Bureaucrat const &executor) const;
        ~ShrubberyCreationForm();
};