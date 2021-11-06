CC = clang
CFLAGS = -Wall -Werror -Wextra

AR = ar
ARFLAGS = rcs

INCS = libft.h

SRCS =	ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memmove.c	\
		ft_memrchr.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c	\

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME)	: $(OBJS)
		$(AR) $(ARFLAGS) $@ $(OBJS)

%.o : %.c $(INCS)
		$(CC) $(CFLAGS) -c -o $@ $<

clean :
		rm $(OBJS)

fclean : clean
		rm $(NAME)

re : fclean all

.PHONY : all clean fclean re