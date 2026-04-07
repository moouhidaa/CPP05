#include  "Form.hpp"

Form::Form(): name("me")  ,nsigned(true),grade_sign(14) ,grade_exec(110){}
Form::Form(std::string n, bool ns, int grades, int gradex):  name(n)  ,nsigned(ns),grade_sign(grades) , grade_exec(gradex){}
Form::Form(Form& other): name(other.name)  ,nsigned(other.nsigned),grade_sign(other.grade_sign) ,grade_exec(other.grade_exec){}

Form &Form::operator=(Form& another)
{
    if(this != &another)
        nsigned =  another.nsigned;
    return (*this);
}

std::string  Form::Getname()const {return name;}
bool         Form::Getnsigned() const{return nsigned;}
int    Form::Getgrade_sign()const{return grade_sign;}
int    Form::Getgrade_exe()const{return grade_exec;}




void Form::beSigned(Bureaucrat &Bu)
{
    if(1 <= Bu.Getgrade() && Bu.Getgrade() <= grade_sign)
        nsigned = true;
    else
        throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Unavialbe Grade : Too High\n";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Unavailbe Grade : Too Low\n";
}

Form::~Form()
{
    std::cout << "Just Get Destyoed\n";
}


std::ostream   &oprator(std::ostream &os, Form const &ob)
{
    os << ob.Getname() << " " << ob.Getgrade_sign()  << " " << ob.Getgrade_exe() << " " << ob.Getgrade_sign() << "\n";
    return os;
}
