#include "span.hpp"

int main()
{
    Span sp(5);
    Span cp(sp);

    try
    {
        sp.addNumber(12);
        sp.addNumber(15);
        sp.addNumber(1);
        // sp.addNumber(0);
        sp.addNumber(19);
        cp.addNumber(12);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}