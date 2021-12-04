#include "span.hpp"

int main()
{
    Span sp(5);
    Span sp1(10);

    int i[] = {13,57,6,46,44,32,24,734,5,54, 19, 97};

    try
    {
        sp1.addRange(i, i + 10);
        sp.addNumber(71);
        sp.addNumber(5);
        sp.addNumber(54);
        sp.addNumber(65);
        sp.addNumber(19);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}