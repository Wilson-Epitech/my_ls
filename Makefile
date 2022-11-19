##
## MY_LS PROJECT, 2022
## makefile
## File description:
## make
##

CC	=	gcc
CCFLAGS =	-Wextra -Wall -Werror

SRC	=	main.c									\
		src/func_find_flag.c							\
		src/flag_a/flag_a.c							\
		src/flag_l/func_date_time.c						\
		src/flag_l/func_display_flag_l.c					\
		src/flag_l/func_id_gid.c						\
		src/flag_l/func_permissions.c						\
		src/flag_l/func_type.c							\
		src/flag_l/flag_l_basic/func_flag_l_basic.c				\
		src/flag_l/flag_l_basic/func_display_flag_l_basic.c			\
		src/flag_l/flag_l_directory/func_flag_l_directory.c			\
		src/flag_l/flag_l_directory/func_display_flag_l_directory.c		\
		src/lib/my_putchar.c							\
		src/lib/my_put_nbr.c							\
		src/lib/my_putstr.c							\
		src/lib/my_strlen.c							\
		src/no_flag/no_flag.c							\
		src/no_flag/no_flag_directory.c						\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CCFLAGS)

clean	:
	$(RM)	$(OBJ)
	$(RM) *~
	cd src && $(RM) *~
	cd src/lib && $(RM) *~
	cd src/flag_l && $(RM) *~
	cd src/flag_l/flag_l_basic && $(RM) *~
	cd src/flag_l/flag_l_directory && $(RM) *~
	cd src/flag_a && $(RM) *~
	cd src/no_flag && $(RM) *~
	cd includes && $(RM) *~

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean all
