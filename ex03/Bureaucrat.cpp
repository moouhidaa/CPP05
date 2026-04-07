#include  "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what()  const noexcept
{
    return "The Grade Unavailbe : Too High";
}

const char *Bureaucrat::GradeTooLowException::what()  const noexcept
{
    return "The Grade Unavailbe : Too Low";
}

int         Bureaucrat::Getgrade()const {return grade;}
std::string Bureaucrat::Getname()const {return name;}

Bureaucrat::Bureaucrat() : name("me"), grade(90){}
Bureaucrat::Bureaucrat(std::string n,int  g): name(n) , grade(g){}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this  !=  &other)
        grade =  other.grade;
    return  *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &another) : name(another.name) , grade(another.grade) {}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Just Unknown Destryed\n";
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

std::ostream  &operator<<(std::ostream  os, Bureaucrat &ob){

    os << ob.Getname() << " , bureacrat grade " << ob.Getgrade() << ".\n";
    return os;
}

void  Bureaucrat::signForm(Form  &essence)
{
    essence.beSigned(*this);
    if(essence.Getnsigned() == true)
        std::cout << "Bureaucrat Singed Form\n";
    else
        std::cout << "<bureaucrat> couldn’t sign <form> because <reason>";
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << "the Bureaucrat Executed Form\n";
    }
    catch(...)
    {
        std::cout  <<  "The Form Not  executeeeeed";
    }
}