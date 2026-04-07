#include  "Bureaucrat.hpp"
#include  <exception>

int main()
{

    try{
           Bureaucrat    a("9rd",1);
           a.Increment();
    }
    catch(std::exception &e)
    {
        std::cout << "something just throwed\n";
        std::cout << e.what() << std::endl;
    }
}