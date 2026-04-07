#include  "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm() : AForm("target",true,14,130)
{

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & Pr) : AForm(Pr.Getname(),Pr.Getnsigned(),Pr.Getgrade_sign(),Pr.Getgrade_exe()) 
{

}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &Pr)
{
    if(this  !=  &Pr)
        target =  Pr.Get_target();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout  <<  "Just Destroyed her\n";
}

void  RobotomyRequestForm::execute(Bureaucrat  const &executor) const
{
    if(executor.Getgrade() != 45 || Getnsigned() == false)
        throw  GradeTooLowException();
    std::cout  << "bang, crash, buzz";
    if(Getnsigned()  ==  true  && executor.Getgrade() == 45)
        std::cout  << target  << "has been robotomized successfully 50% of the time \n";
    else
        std::cout  <<  "Robotomy Failed\n";

}
RobotomyRequestForm::RobotomyRequestForm(std::string  target) : AForm(target, true,72 ,45) , target(target)
{

}

std::string  RobotomyRequestForm::Get_target() const{return target;}
