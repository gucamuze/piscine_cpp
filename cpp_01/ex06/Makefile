NAME = harlFilter

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

SRC = main.cpp Harl.class.cpp

OBJ = ${SRC:.cpp=.o}

DEP = ${OBJ:.o=.d}

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

-include $(DEP)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) $(DEP)

fclean : clean
	rm -f $(NAME)

re : fclean
	make all

.PHONY : all clean fclean re .cpp.o