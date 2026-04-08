#pragma once

class  AForm;
#include  "AForm.hpp"
#include  "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
    const std::string   name;
    int                 grade;
    public:
    class GradeTooHighException : public  std::exception{ // nested class --
        public:
           virtual const char *what() const  throw();
    };

    class GradeTooLowException : public  std::exception{
        public:
            virtual const char  *what()const  throw();
    };

    std::string     Getname() const;
    int             Getgrade() const;
    void            Increment();
    void            Decrement();
    void            signForm(AForm  &F);

    Bureaucrat();
    Bureaucrat(std::string n,int g);
    Bureaucrat(const Bureaucrat &another);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

};

std::ostream  &operator<<(std::ostream  &os, Bureaucrat &ob);