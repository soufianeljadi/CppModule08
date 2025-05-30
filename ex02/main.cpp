#include "MutantStack.hpp"

int main()
{
    std::cout << "--------------------MutantStack----------------------" << std::endl;
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;
        std::cout << "-----------------------"<< std::endl;
        mstack.pop();

        std::cout << mstack.size() << std::endl;
        std::cout << "-----------------------"<< std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << "--------------------LIST-----------------------------" << std::endl;
    {
        std::list<int> l;
        l.push_back(5);
        l.push_back(17);

        std::cout << l.back() << std::endl;
        std::cout << "-----------------------"<< std::endl;
        l.pop_back();

        std::cout << l.size() << std::endl;
        std::cout << "-----------------------"<< std::endl;

        l.push_back(3);
        l.push_back(5);
        l.push_back(737);
        //[...]
        l.push_back(0);

        std::list<int>::iterator it = l.begin();
        std::list<int>::iterator ite = l.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    return 0;
}