CC=c++
CFLAGS= -Werror -Wall -Wextra -std=c++98
SRCS= main.cpp Harl.cpp
INC= Harl.hpp
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)
all: Harl

Harl: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf Harl $(OBJ)
re:clean
	$(MAKE)
