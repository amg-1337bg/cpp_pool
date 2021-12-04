#include "span.hpp"

Span::Span (unsigned int n)
{
    N = n;
    current = 0;
}

Span::Span (const Span &sp)
{
    *this = sp;
}

Span::~Span()
{
}

Span &Span::operator= (const Span &sp)
{
    numbers = sp.numbers;
    N = sp.N;
    current = sp.current;
    return *this;
}

void    Span::addNumber(int i)
{
    if (current == N)
        throw Span::Out_Of_Limits();
    else
    {
        numbers.push_back(i);
        current++;
    }
}

void    Span::addRange(int *begin, int *end)
{
    numbers = std::vector<int>(begin, end);
    if (numbers.size() > N)
        throw Span::Out_Of_Limits();
}

int Span::shortestSpan( void ) 
{
    int min;

    if (current == 1 || current == 0)
        throw Span::Error();
    std::sort(numbers.begin(), numbers.end());
    min = numbers[1] - numbers[0];
    for (size_t i = 0; i < N - 1; i++)
    {
        if (numbers[i + 1] - numbers[i] < min)
            min = numbers[i + 1] - numbers[i];
    }
    return min;
}

int Span::longestSpan( void ) const
{
    if (current == 1 || current == 0)
        throw Span::Error();
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());

    return max - min;
}