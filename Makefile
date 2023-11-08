NAME=libftprintf.a

SRCS= ft_basic.c ft_lower_hex.c ft_printf.c ft_unsigned.c ft_upper_hex.c ft_pointer.c

OBJS= $(SRCS:.c=.o)

CC=gcc 

RM= rm -rf

CFLAGS= -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	 $(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean  re fclean