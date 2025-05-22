#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
      
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        try {
            sp.addNumber(42);
            std::cout << "Added number 42" << std::endl;
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "-------------------------"<< std::endl;
    {
        Span sp = Span(10000);
        std::vector<int> numbers(10000);

        for (int i = 0; i < 10000; ++i)
            numbers[i] = i * 2;

        sp.addNumbers(numbers.begin(), numbers.end());
        // while(numbers.size() > 0)
        // {
        //     std::cout<<"Added number: " << numbers.back() << std::endl;
        //     numbers.pop_back();
        // }
    }
    std::cout << "-------------------------"<< std::endl;

    {
        Span sp = Span(1);
        sp.addNumber(13);

        try {
            std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}