CXX:= c++

CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

SRCS:=  megaphone.cpp

OBJS:= $(SRCS:.cpp=.o) 

RM:= rm -f

NAME:= megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
