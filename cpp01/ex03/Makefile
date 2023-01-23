CC=c++
CFLAGS= -Werror -Wall -Wextra -std=c++98
SRCS= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
INC= HumanA.hpp HumanB.hpp Weapon.hpp
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)
all: Weapon

Weapon: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf Weapon $(OBJ)
re:clean
	$(MAKE)
