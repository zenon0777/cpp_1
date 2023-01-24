CC=c++
CFLAGS= -Werror -Wall -Wextra -std=c++98
SRCS= Contact.cpp PhoneBook.cpp main.cpp
INC= Contact.hpp PhoneBook.hpp
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)
all: PhoneBook

PhoneBook: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf PhoneBook
re:clean
	$(MAKE)
