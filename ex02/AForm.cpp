#include  "AForm.hpp"

AForm::AForm(): name("me")  ,nsigned(true),grade_sign(14) ,grade_exec(110){}
AForm::AForm(std::string n, bool ns, int grades, int gradex):  name(n)  ,nsigned(ns),grade_sign(grades) , grade_exec(gradex){}
AForm::AForm(AForm& other): name(other.name)  ,nsigned(other.nsigned),grade_sign(other.grade_sign) ,grade_exec(other.grade_exec){}

AForm &AForm::operator=(AForm& another)
{
    if(this != &another)
        nsigned =  another.nsigned;
    return (*this);
}

std::string  AForm::Getname()const {return name;}
bool         AForm::Getnsigned() const{return nsigned;}
int    AForm::Getgrade_sign()const{return grade_sign;}
int    AForm::Getgrade_exe()const{return grade_exec;}

void AForm::beSigned(Bureaucrat &Bu)
{
    if(1 <= Bu.Getgrade() && Bu.Getgrade() <= grade_sign)
        nsigned = true;
    else
        throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Unavialbe Grade : Too High\n";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Unavailbe Grade : Too Low\n";
}

AForm::~AForm()
{
    std::cout << "Just Get Destyoed\n";
}

std::ostream   &oprator(std::ostream &os, AForm const &ob)
{
    os << ob.Getname() << " " << ob.Getgrade_sign()  << " " << ob.Getgrade_exe() << " " << ob.Getgrade_sign() << "\n";
    return os;
}
