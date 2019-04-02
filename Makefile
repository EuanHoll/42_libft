# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ehollidg <ehollidg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/21 14:51:46 by ehollidg       #+#    #+#                 #
#    Updated: 2019/03/29 15:50:04 by ehollidg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = atoi bzero isalnum isalpha isascii isdigit isprint itoa memalloc memccpy \
	  memchr memcmp memcpy memdel memrchr memset putchar_fd putchar \
	  putendl_fd putendl putnbr_fd putnbr putstr_fd putstr strcat strchr strclr \
	  strcmp strcpy strdel strdup strlcat strlen strncat strncmp strncpy strnew \
	  strnstr strrchr strrev strstr tolower toupper skipwhitespace toabs \
	  memmove striter striteri strjoin iswhitespace strtrim strcc strsplit \
	  strskip strmap strmapi strnequ strequ strsub lstnew lstadd lstdel lstiter \
	  lstcpyelm lstdelone lstmap strcontains lstcnt min max floor ceil
SRCF = $(SRC:%=ft_%.c)
OBJ = $(SRCF:%.c=%.o)
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCF)
	ar -rcsv $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

mclean: $(NAME) clean

fclean: clean
	rm -f $(NAME)

re: fclean all