CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard ./*.c)
OBJS = $(SRCS:.c=.o)
TARGET = test

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I libft.h

$(TARGET) : 
	$(CC) $(CFLAGS) -o $(OBJS) $(TARGET)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(TARGET)

run :
	./$(TARGET)

re : fclean all

