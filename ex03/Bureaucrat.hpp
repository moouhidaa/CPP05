#pragma once

#include <string>
#include <iostream>
#include <exception>
#include  "Form.hpp"
#include  "AForm.hpp"

class Bureaucrat
{
    private:
    const std::string name;
    int               grade;
    public:
    class GradeTooHighException : public  std::exception{ // nested class --
        public:
            const char *what() const noexcept;
    };

    class GradeTooLowException : public  std::exception{
        public:
            const char  *what() const noexcept;
    };

    std::string Getname() const;
    int         Getgrade() const;
    void  Increment();
    void  Decrement();
    void  signForm(Form &essence);

    void  executeForm(AForm const & form) const;

    Bureaucrat();
    Bureaucrat(std::string n,int g);
    Bureaucrat(const Bureaucrat &another);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

};

std::ostream  &operator<<(std::ostream  os, Bureaucrat &ob);