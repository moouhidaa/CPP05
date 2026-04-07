#include "ShrubberyCreationForm.hpp"

int  main()
{
    try
    {
    Bureaucrat  BU("who",137);
    ShrubberyCreationForm   Sh;
    Sh.execute(BU);
    }

    catch(std::exception &e)
    {
        std::cout  <<  e.what() ;
    }
}