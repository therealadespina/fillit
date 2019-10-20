NAME = fillit

CFLAGS = -Wall -Werror -Wextra -I $(HEADERS) -o $(NAME)

SRC = main.c read.c map.c placeit.c solve.c validate.c strtrimalt.c tools.c

LIBFT_DIR = libft
LIBS = libft/libft.a

OBJ = $(SRC:.c=.o)

HEADERS = .

all: $(NAME)

$(LIBS):
	make -C $(LIBFT_DIR)

$(NAME): $(SRC) $(LIBS)
	gcc $(CFLAGS) $(SRC) $(LIBS)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all
