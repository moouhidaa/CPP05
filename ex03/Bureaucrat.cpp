#include  "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const  throw()
{
    return "The Grade Unavailbe : Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const  throw()
{
    return "The Grade Unavailbe : Too Low";
}

int         Bureaucrat::Getgrade() const {return grade;}
std::string Bureaucrat::Getname() const {return name;}

Bureaucrat::Bureaucrat() : name("me"), grade(137){}
Bureaucrat::Bureaucrat(std::string n,int  g): name(n) , grade(g){}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this  !=  &other)
        this->grade =  other.grade;
    return  *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &another) : name(another.name) , grade(another.grade) {}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Just Unknown Destroyed\n";
}
void  Bureaucrat::Increment()
{
    grade--;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void  Bureaucrat::Decrement()
{
        grade++;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void  Bureaucrat::signForm(AForm  &F)
{
    try
    {
        F.beSigned(*this);
        std::cout << "the " << Getname() << " signed form\n";
    }
    catch(std::exception &e)
    {
        std::cout  << Getname() << " couldn't sign " << F.Getname() << " cause " << e.what() << "\n";
    }
}

std::ostream  &operator<<(std::ostream  &os, Bureaucrat &ob){

    os << ob.Getname() << " , bureacrat grade " << ob.Getgrade() << ".\n";
    return os;
}