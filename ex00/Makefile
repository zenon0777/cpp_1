CC=c++
CFLAGS= -Werror -Wall -Wextra
SRCS= Zombie.cpp
INC= Zombie.hpp
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)
all: Zombie

Zombie: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf Zombie $(OBJ)
re:clean
	$(MAKE)
