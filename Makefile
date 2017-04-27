# List of all your source ".c" files
SRC=	main.c		\
	sapin.c		\
	build_trunc.c	\
	tree_width.c	\
	tree_floor.c	\
	my_putchar.c

NAME = sapin

OBJ = $(SRC:.c=.o)

# Master rule that calls other rule(s) 
all:	$(NAME)

# Create the module files (.o) from the source files (.c)
$(NAME):	$(OBJ)
	cc -m32 -o $(NAME) $(OBJ)

# Delete the module files
clean:
	rm -f $(OBJ)
# Delete the binaries & the module files
fclean:		clean
	rm -f $(NAME)

# Cleans the folder & restart the project
re:	fclean all
