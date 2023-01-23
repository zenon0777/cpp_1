CC=c++
CFLAGS= -Werror -Wall -Wextra -std=c++98
SRCS= main.cpp
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS)
all: Sed

Zombie: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf Sed $(OBJ)
re:clean
	$(MAKE)
