CPPFLAG = -std=c++98
SRC = *.cpp
HDR = *.hpp
NAME = fixed
CC = c++

all: $(NAME)

$(NAME): $(SRCS) $(HDR)
	@$(CC) $(CPPFLAG) $(SRC) -o $(NAME)
	@echo compiled!
clean:
	@echo cleaned

fclean: clean
	@rm -rf $(NAME)

re: fclean all