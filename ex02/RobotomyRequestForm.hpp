#pragma once
#include <string>
#include <iostream>
#include  "Bureaucrat.hpp"
#include "AForm.hpp"

class  RobotomyRequestForm: public AForm
{
    private:
        std::string  target;
    public:
        std::string  Get_target() const;
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm & Pr);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &Pr);
        void execute(Bureaucrat const &executor) const ;
        ~RobotomyRequestForm();
};