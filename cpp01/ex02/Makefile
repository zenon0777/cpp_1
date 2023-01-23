CC=c++
CFLAGS= -Werror -Wall -Wextra -std=c++98
SRCS= main.cpp
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)
all: Brain

Brain: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf Brain $(OBJ)
re:clean
	$(MAKE)
