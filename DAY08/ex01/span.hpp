#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> numbers;
        unsigned int current;
        unsigned int N;
    
    public:
        Span(unsigned int);
        Span(const Span&);
        ~Span();
        Span &operator = (const Span &);

        class Out_Of_Limits : public std::exception
        {
            const char* what() const throw()
            {
                return "Out Of Limits";
            }
        };
        class Error : public std::exception
        {
            const char* what() const throw()
            {
                return "Can't Find Span";
            }
        };

        void    addNumber(int);
        void    addRange(int *, int*);

        int     shortestSpan( void ) ;
        int     longestSpan( void ) const;
};

#endif