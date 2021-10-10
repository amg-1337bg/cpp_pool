NAME= phonebook

FLAGS= -Wall -Werror -Wall -std=c++98

SRC= contact.cpp main.cpp phonebook.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all
