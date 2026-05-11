#include "RobotomyRequestForm.hpp"

int  main()
{
    try
    {
    Bureaucrat  BU("Mouaad",2);
    RobotomyRequestForm  Sh;
    BU.executeForm(Sh);


    }

    catch(std::exception &e)
    {
        std::cout  <<  e.what() ;
    }
}