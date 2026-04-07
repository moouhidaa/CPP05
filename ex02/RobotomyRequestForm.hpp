#pragma once
#include <string>
#include <iostream>
#include  "Bureaucrat.hpp"
#define  SIGNED 1
#define   USIGNED 0

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