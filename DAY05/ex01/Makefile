NAME= form

FLAGS= -Wall -Werror -Wextra -std=c++98

SRC= main.cpp Bureaucrat.cpp Form.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all
