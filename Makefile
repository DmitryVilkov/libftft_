SRC =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_strlen.c \
		ft_memmove.c \
		ft_memset.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \


OBJS = $(SRC:.c=.o)

NAME = libft.a

%.o:	%.c
	cc -Wall -Wextra -Werror -I libft.h -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS) libft.h
			ar rcs $(NAME) $?

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:			fclean $(NAME)
