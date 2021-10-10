NAME= zombie

FLAGS= -Wall -Werror -Wall -std=c++98

SRC= main.cpp Zombie.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all
