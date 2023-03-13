CPPFLAG = -Wall -Wextra -Werror -std=c++98
SRC = *.cpp
HDR = *.hpp
NAME = file
CC = c++

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAG) $(SRC) -o $(NAME)
	@echo compiled!
clean:
	@echo cleaned

fclean: clean
	@rm -rf $(NAME)

re: fclean all