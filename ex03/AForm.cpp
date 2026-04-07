#include  "AForm.hpp"

AForm::AForm(): name("me")  ,nsigned(false),grade_sign(150) ,grade_exec(110){}
AForm::AForm(std::string n, bool ns, int grades, int gradex):  name(n)  ,nsigned(ns),grade_sign(grades) , grade_exec(gradex){}
AForm::AForm(AForm& other): name(other.name)  ,nsigned(other.nsigned),grade_sign(other.grade_sign) ,grade_exec(other.grade_exec){}
AForm &AForm::operator=(AForm const &another)
{
    if(this != &another)
        nsigned =  another.nsigned;
    return (*this);
}

std::string  AForm::Getname()const {return name;}
bool         AForm::Getnsigned() const{return nsigned;}
const int    AForm::Getgrade_sign()const{return grade_sign;}
const int    AForm::Getgrade_exe()const{return grade_exec;}

std::ostream   &oprator(std::ostream os, AForm const &ob)
{
    os << ob.Getname() << " " << ob.Getgrade_sign()  << " " << ob.Getgrade_exe() << " " << ob.Getgrade_sign() << "\n";
}
AForm::~AForm()
{
    std::cout << "Just Get Destyoed\n";
}

const char *AForm::GradeTooHighException::what() const noexcept
{
    return "Unavialbe Grade : Too High\n";
}

const char *AForm::GradeTooLowException::what() const noexcept
{
    return "Unavialbe Grade : Too Low\n";
}

void AForm::beSigned(Bureaucrat &Bu)
{
    if( 1 >= Bu.Getgrade() <= 75)
        nsigned = true;
    if(Bu.Getgrade() > 150)
      throw GradeTooLowException();

}
