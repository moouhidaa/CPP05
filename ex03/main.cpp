#include "Intern.hpp"


int  main()
{
    Bureaucrat   me;
    Intern   in;
    AForm   *F;
    F = in.makeForm("ShrubberyCreactionForm","somebody");
    try 
    {
    if(!F)
    {
        std::cout << "failed to create the Form\n";
        return 1;
    }
        F->check_execute(me);
    }
    catch(std::exception &e)
    {
        std::cout  << "we catched\n";
        std::cout  <<  e.what() << std::endl;
    }
    delete  F;
}