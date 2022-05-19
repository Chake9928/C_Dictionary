SRCS	= cut_space.c dict_struct.c main.c nketa.c parse.c split.c functions.c miketa.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC+FLAGS		= gcc -Werror -Wall -Wextra -o
RM		= rm -f

${NAME}:	${OBJS}
			${CC+FLAGS}  ${NAME}  ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
