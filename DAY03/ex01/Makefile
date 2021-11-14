NAME= scavtrap

FLAGS= -Wall -Werror -Wextra -std=c++98

SRC= main.cpp ClapTrap.cpp ScavTrap.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all
