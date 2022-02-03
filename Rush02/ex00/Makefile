SRCS = main.c ft_bloc_1.c ft_bloc_2.c ft_error.c ft_fct_1.c ft_fct_2.c ft_share_out_1.c ft_share_out_2.c

NAME = rush-02

CC  = gcc 

CFLAGS = -Wall -Wextra -Werror

RM 	= rm -f

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${SRCS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}
