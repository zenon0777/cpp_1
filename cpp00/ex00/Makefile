CC=c++
CFLAGS= -Werror -Wall -Wextra
SRCS= megaphone
OBJ =$(subst .cpp,.o,$(SRCS))

%.o: %.cpp $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)
all: megaphone

megaphone: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -rf megaphone $(OBJ)
re:clean
	$(MAKE)
