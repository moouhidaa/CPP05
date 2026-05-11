#include  "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("target",true,25,5){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & Pr) : AForm(Pr.Getname(),Pr.Getnsigned(),Pr.Getgrade_sign(),Pr.Getgrade_exe()) {}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &Pr)
{
    if(this  !=  &Pr)
        target =  Pr.Get_target();
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout  <<  "The PresidentialPardonForm Destractor Called\n";
}

void  PresidentialPardonForm::execute(Bureaucrat  const &executor) const
{
    check_execute(executor);
    std::cout << "Informs that "<< target << " has been pardoned by Zaphod Beeblebrox";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("target",true,25,5), target(target)
{
    
}
std::string  PresidentialPardonForm::Get_target() const{return target;}
