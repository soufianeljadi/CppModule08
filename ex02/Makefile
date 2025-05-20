CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
NAME = MutantStack	
OBJ =$(SRC:.cpp=.o)
RM = rm -rf

all	: $(NAME)

$(NAME)	: $(OBJ) MutantStack.hpp
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: clean  