#include "Bureaucrat.hpp"


int main()
{
    Bureaucrat  B("mouaad",67);
    Form  F("less",true,13,23);
    std::cout  <<F.Getgrade_sign()<< " " << B.Getgrade() << "  \n" ;
    B.signForm(F);
    /*---------------------------------------------------*/
    /*         Hello  Word from  mouaad block           */
}