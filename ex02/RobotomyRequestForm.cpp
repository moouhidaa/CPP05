#include  "RobotomyRequestForm.hpp"
#include  <cstdlib>
RobotomyRequestForm::RobotomyRequestForm() : AForm("target",true,72,45)
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
    std::cout  <<  "The RobotomyReauestFrom Destractor Called\n";
}

void  RobotomyRequestForm::execute(Bureaucrat  const &executor) const
{
    check_execute(executor);
    std::cout  << "bang, crash, buzz\n";
    if(rand() % 2)
        std::cout  << target  << "has been robotomized successfully 50% of the time \n";
    else
        std::cout  <<  target << "robotmy failed\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string  target) : AForm(target, true,72 ,45) , target(target)
{

}

std::string  RobotomyRequestForm::Get_target() const{return target;}
