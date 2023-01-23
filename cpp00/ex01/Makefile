CC=c++
CFLAGS= -Werror -Wall -Wextra
SRCS= Contact.cpp PhoneBook.cpp
INC= Contact.hpp PhoneBook.hpp
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)
all: PhoneBook

PhoneBook: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf PhoneBook $(OBJ)
re:clean
	$(MAKE)
