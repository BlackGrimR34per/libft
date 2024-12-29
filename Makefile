# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 09:34:57 by yosherau          #+#    #+#              #
#    Updated: 2024/11/11 20:22:04 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c			\
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c		\
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c	\
					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
					ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c	\
					ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c		\
					ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRCS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c			\
					ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c		\
					ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS			=	$(SRCS:.c=.o)

BONUS_OBJS		=	$(BONUS_SRCS:.c=.o)

CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror

NAME			=	libft.a
# SO_NAME			=	libft.so

# ifeq ($(MAKECMDGOALS), bonus)
# 	OBJS += $(BONUS_OBJS)
# endif

all:				$(NAME)

RM				=	rm -f

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)

$(OBJS):			$(SRCS)
					$(CC) $(CFLAGS) -c $^

$(BONUS_OBJS):		$(BONUS_SRCS)
					$(CC) $(CFLAGS) -c $^

bonus:				$(OBJS) $(BONUS_OBJS)
					ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
					$(RM) $(OBJS) $(BONUS_OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean $(NAME)

# so:					$(OBJS)
# 					$(CC) -nostartfiles -fPIC -shared -o $(SO_NAME) $(OBJS)

phony:				all clean fclean re bonus