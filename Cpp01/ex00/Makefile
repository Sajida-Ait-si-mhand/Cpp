#colors
RED = \033[0;31m
YELLOW = \033[0;33m
BLACK = \033[0m
MAGENTA = \033[1;35m
CYAN = \033[36m
GREEN0 = \033[32m
GREEN1 = \033[38;5;121m
HIGHLIGHTER = \033[0;43m

CXX:= c++

CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

SRCS:=  Zombie.cpp main.cpp randomChump.cpp newZombie.cpp

OBJS:= $(SRCS:.cpp=.o) 

RM:= rm -f

NAME:= zombie

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
