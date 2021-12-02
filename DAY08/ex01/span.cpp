#include "span.hpp"

Span::Span (unsigned int n)
{
    current = 0;
    numbers = new int[n];
    N = n;
}

Span::Span (const Span &sp)
{
    current = sp.current;
    numbers = new int[sp.getLength()];
    for (size_t i = 0; i < sp.getLength(); i++)
        numbers[i] = sp.numbers[i];
}

Span::~Span()
{
    delete[] numbers;
}

Span &Span::operator= (const Span &sp)
{
    delete[] numbers;
    current = sp.current;
    numbers = new int[sp.getLength()];
    for (size_t i = 0; i < sp.getLength(); i++)
        numbers[i] = sp.numbers[i];
    return *this;
}

unsigned int Span::getLength() const
{
    return N;
}

void    Span::addNumber(int i)
{
    if (current == N)
        throw Span::Out_Of_Limits();
    else
        numbers[current++] = i;
}