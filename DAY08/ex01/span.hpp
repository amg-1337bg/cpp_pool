#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
    private:
        int *numbers;
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
        unsigned int getLength() const;
        void    addNumber(int);
};

#endif