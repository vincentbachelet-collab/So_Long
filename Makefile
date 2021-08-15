SRCS =			Affichage_Ecran3.c \
				Affichage_Ecran.c \
				Affichage_Ecran2.c \
				Check_Errors.c \
				Check_Errors2.c \
				Check_Errors3.c \
				Deplacements_Personnages2.c \
				Deplacements_Personnages.c \
				main.c \
				Utils_Solong1.c \
				Utils_Solong2.c \
				ft_calloc.c \
				ft_lstadd_back.c \
				ft_lstlast.c \
				ft_memset.c \
				ft_lstnew.c \
				ft_strlen.c \
				Deplacements_Personnages3_Ennemies.c \
				Animation_Personnage.c  \
				Affichage_Sprites.c \
				Animation_Ennemy2.c \
				Animation_Defaite.c \
				Animation_Kamehameha.c \


OBJS         = ${SRCS:.c=.o}

UNAME        := $(shell uname)

PATH_MLX    = mlx
CC             = gcc -g -fsanitize=address
CFLAGS        = -Wall -Wextra -Werror
RM            = rm -f
NAME        = so_long
FLAGS        = -Imlx -Lmlx -lmlx -framework OpenGL -framework AppKit

all:         ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):     $(OBJS)
			make -C $(PATH_MLX)
			${CC} $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)
clean:
			make -C $(PATH_MLX) clean
			${RM} ${OBJS}

fclean:     clean
			make -C $(PATH_MLX) clean
			${RM} ${NAME}

re:         fclean all

.PHONY:		bonus all clean fclean re
