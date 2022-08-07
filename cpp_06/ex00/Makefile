NAME = Convert

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

SRC = main.cpp Converter.cpp

OBJ = ${SRC:.cpp=.o}

DEP = ${OBJ:.o=.d}

all : $(NAME)

-include $(DEP)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) $(DEP)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re .cpp.o