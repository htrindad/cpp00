NAME = phonebook
SRC = main.cpp Contact.cpp PhoneBook.cpp
CFLAGS = -Wall -Werror -Wextra --std=c++98

$(NAME):
	c++ $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm $(NAME)

re: clean all
