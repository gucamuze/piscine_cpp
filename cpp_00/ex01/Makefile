NAME			= phonebook

SRC				= phonebook_main.cpp Contact.cpp PhoneBook.cpp
OBJ				= phonebook_main.o Contact.o PhoneBook.o

COMPILER		= c++
COMPILERFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

%.o:%.cpp
	$(COMPILER) $(COMPILERFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(COMPILER) $(COMPILERFLAGS) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory