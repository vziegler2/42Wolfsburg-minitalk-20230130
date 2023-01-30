SRCS	=	./Libft/Libft.a
SRCS_C	=	client.c
SRCS_S	=	server.c
# Hier alle zu kompilierenden Dateien erfassen
OBJS_C	=	${SRCS_C:.c=.o}
OBJS_S	=	${SRCS_S:.c=.o}
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
NAME	=	client
SERVER	=	server
MAKELIB =	./Libft/Libft.a
# Namen der kompilierten Programme
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	=	-Wall -Wextra -Werror
# Die verwendeten Flags
all:		${MAKELIB} ${NAME} ${SERVER}
# Damit nur bei Veränderungen neu kompiliert wird
${MAKELIB}:	
			make -C Libft
${NAME}:	${OBJS_C}
			${CC} ${CFLAGS} -o $@ $^ ${SRCS}
${SERVER}:	${OBJS_S}
			${CC} ${CFLAGS} -o $@ $^ ${SRCS}
# Die .o-Dateien werden nur verlinkt, falls NAME noch nicht existiert
clean:
			${RM} ${OBJS_C} ${OBJS_S}
# Löscht die .a-Dateien
fclean:		clean
			${RM} ${NAME} ${SERVER}
			make -C Libft fclean
# Führt die fclean-Befehle der Unterordner aus und entfernt die .exe
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert