CXX:= c++

CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

SRCS:=  Contact.cpp main.cpp Phonebook.cpp 

OBJS:= $(SRCS:.cpp=.o) 

RM:= rm -f

NAME:= phonebook

all: $(NAME)

$(NAME): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
