INC		=	ft_printf.h
SRCS	=	ft_printf.c ft_print_str.c ft_utility.c\
			ft_libft.c ft_hub_printf.c

OBJS	=	$(SRCS:.c=.o)

CC			= clang
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
NAME		= libftprintf.a
all:		$(NAME)
$(NAME):	$(OBJS) $(INC)
			ar rcs $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)
fclean:	clean
			$(RM) $(NAME)
re:			fclean $(NAME)
.PHONY:	all clean fclean re bonus