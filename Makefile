CC = cc
CFLAGS = -Wall -Wextra -Werror -I. 
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_puthex.c ft_diglen.c ft_strlen.c ft_putnbr.c ft_putptr.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
