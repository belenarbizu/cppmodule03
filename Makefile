SRCS = main.cpp ClapTrap.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = claptrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re: fclean ${MAKE} ${NAME}

.PHONY: all clean fclean re libft
