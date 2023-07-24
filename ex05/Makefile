NAME=do-op
SOURCES=srcs/do-op.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_strlen.c
OBJECTS=$(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc -Wall -Wextra -Werror -o $(NAME) $(SOURCES)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
