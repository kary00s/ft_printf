
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

HEADER = libftprintf.h
	
SRCS = libftprintf.c libftprintf_utils.c libftprintf_utils2.c

OBJECTS = $(SRCS:.c=.o) 
	
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)


re: fclean all