#include "Intern.hpp"


int  main()
{
    try 
    {
    Bureaucrat   me;
    Intern   in;
    AForm   *F;
    F = in.makeForm("Shrubbery","somebody");

    F->execute(me);
    }
    catch(std::exception &e)
    {
        std::cout  << "we catched\n";
        std::cout  <<  e.what() << std::endl;
    }
}