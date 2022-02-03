NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c 

OBJS = {SRCS:.c=.o}

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I include -c

${NAME}:	${OBJS}
			${CC} ${CFLAGS} 

%.o: %.c
	${CC} ${CFLAGS} $^ -o $@

${NAME}: ${OBJS}
	ar rc $@ $^

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
