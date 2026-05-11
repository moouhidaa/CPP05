#include  "Bureaucrat.hpp"
#include  <exception>

int main()
{
    try{
           Bureaucrat    a("9rd",50);
           a.Increment();
           std::cout  << a;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}