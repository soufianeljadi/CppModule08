#ifndef SPAN_HPP
#define SPAN_HPP


#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <list>
#include <climits>


class Span
{
    private:
        unsigned int _size;
        std::vector<int> _numbers;
    public:
        Span(unsigned int size);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class SpanFullException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class NoSpanException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};


#endif