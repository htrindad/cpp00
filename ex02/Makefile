NAME = tests

SRC = tests.cpp Account.cpp

CFLAGS = -Wall -Werror -Wextra -O3 --std=c++98

$(NAME):
	c++ $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm $(NAME)

re: clean all
