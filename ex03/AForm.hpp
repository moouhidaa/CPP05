#pragma  once 
#include  <string>
#include  <iostream>
#include  <string>
#include <Bureaucrat.hpp>
#include  <exception>
#define  SIGNED     1
#define  UNSIGNED   0


class AForm
{
    private:
      const  std::string  name;
      bool                nsigned;
      const  int          grade_sign;
      const  int          grade_exec;
    public:
        class GradeTooHighException : public  std::exception{ // nested class --
                public:
            const char *what() const noexcept;
        };

        class GradeTooLowException : public  std::exception{
                public:
                const char  *what() const noexcept;
        };
        AForm();
        AForm(std::string n, bool ns, int grades, int gradex);
        AForm(AForm& other);
        AForm &operator=(AForm const &another);
        ~AForm();

        std::string  Getname()const;
        bool         Getnsigned()const;
        const int    Getgrade_sign()const;
        const int    Getgrade_exe()const;

        virtual  void  beSigned(Bureaucrat &Bu);

        virtual  void  execute(Bureaucrat const &executor) const  = 0;

};

std::ostream   &oprator(std::ostream os, AForm const &ob);
