CPPFLAG = -Wall -Wextra -Werror -std=c++98
SRCS = *.cpp
HDR = *.hpp
NAME = triangle
CC = c++

all: $(NAME)

$(NAME): $(SRCS) $(HDR)
	@$(CC) $(CPPFLAG) $(SRCS) -o $(NAME)
	@echo compiled!
clean:
	@echo cleaned

fclean: clean
	@rm -rf $(NAME)

re: fclean all