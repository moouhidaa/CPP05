#include  "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("target",true,145,137){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & Pr) : AForm(Pr.Getname(),Pr.Getnsigned(),Pr.Getgrade_sign(),Pr.Getgrade_exe()) {}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &Pr)
{
    if(this  !=  &Pr)
        target =  Pr.Get_target();
    return *this;
}

void  ShrubberyCreationForm::execute(Bureaucrat  const &executor) const
{
     if(executor.Getgrade() != Getgrade_exe() || Getnsigned() == false)
        throw  GradeTooHighException();
    if(Getnsigned() == true && executor.Getgrade() == Getgrade_exe())
    {
        std::string s =  target + "_shrebbery";
        std::ofstream  file(s.c_str());
        for (int x = 0; x < 3 ; x++)
        {
            file << "           *         \n";
            file << "          ***        \n";
            file << "         *****       \n";
            file << "        *******      \n";
            file << "       *********     \n";
            file << "      ***********    \n";
            file << "     *************   \n";
            file << "    ***************  \n";
            file << "   ***************** \n";
            file << "           |         \n";
            file << "           |         \n";
            file  << "\n";
        }
        file.close();
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string  target) : AForm(target,true,145,137), target(target)
{

}

std::string  ShrubberyCreationForm::Get_target() const
{
    return target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout  <<  "Just Destroyed heryn";
}