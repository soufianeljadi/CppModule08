#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(13);
    sp.addNumber(37);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(10);
    
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    try {
        sp.addNumber(42);
        std::cout << "Added number 42" << std::endl;
    } catch (const Span::SpanFullException &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}