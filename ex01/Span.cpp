#include "Span.hpp"

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span &other) : _size(other._size), _numbers(other._numbers) {}

Span &Span::operator=(const Span &other) 
{
    if (this != &other) 
    {
        _size = other._size;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) 
{
    if (_numbers.size() >= _size)
        throw SpanFullException();
    _numbers.push_back(number);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) 
{
    if (std::distance(begin, end) + _numbers.size() > _size)
        throw SpanFullException();
    _numbers.insert(_numbers.end(), begin, end);
}

unsigned int Span::shortestSpan() 
{
    if (_numbers.size() < 2)
        throw NoSpanException();

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    unsigned int minSpan = UINT_MAX;
    for (size_t i = 1; i < sorted.size(); ++i) 
    {
        unsigned int span = sorted[i] - sorted[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

unsigned int Span::longestSpan() 
{
    if (_numbers.size() < 2)
        throw NoSpanException();

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}

const char *Span::SpanFullException::what() const throw() {
    return "Span is full";
}

const char *Span::NoSpanException::what() const throw() {
    return "No span can be found";
}
