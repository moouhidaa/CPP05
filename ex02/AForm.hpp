#pragma  once 
#include  <string>
#include  <iostream>
#include  <string>
#include "Bureaucrat.hpp"
#include  <exception>

class  Bureaucrat;

class AForm
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
        AForm();
        AForm(std::string n, bool ns, int grades, int gradex);
        AForm(AForm& other);
        AForm &operator=(AForm& another);
        ~AForm();

        std::string  Getname()const;
        bool         Getnsigned()const;
        int         Getgrade_sign()const;
        int         Getgrade_exe()const;
        void  beSigned(Bureaucrat &Bu);
        virtual  void execute(Bureaucrat  const  &executor) const = 0;
};

std::ostream   &oprator(std::ostream &os, AForm const &ob);
