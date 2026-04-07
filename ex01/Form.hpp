#pragma  once 
#include  <string>
#include  <iostream>
#include  <string>
#include "Bureaucrat.hpp"
#include  <exception>

class  Bureaucrat;

class Form
{
    private:
      const  std::string  name;
      bool                nsigned;
      int const          grade_sign;
      int const          grade_exec;
    public:
        class GradeTooHighException : public  std::exception{ // nested class --
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public  std::exception{
            public:
                virtual const char  *what() const throw();
        };
        Form();
        Form(std::string n, bool ns, int grades, int gradex);
        Form(Form& other);
        Form &operator=(Form& another);
        ~Form();

        std::string  Getname()const;
        bool         Getnsigned()const;
        int         Getgrade_sign()const;
        int         Getgrade_exe()const;
        void  beSigned(Bureaucrat &Bu);
};

std::ostream   &oprator(std::ostream &os, Form const &ob);
