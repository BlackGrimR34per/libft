# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2024/11/07 15:52:10 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c \
					ft_isalpha.c \
					ft_strchr.c \
					ft_tolower.c ft_isascii.c \
					ft_strlen.c \
					ft_toupper.c ft_isdigit.c ft_memset.c ft_bzero.c ft_atoi.c ft_strrchr.c \
					ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_strnstr.c \
					ft_strlcat.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_strmapi.c ft_striteri.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ./libftft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.t

NAME			= libft.a
SO_NAME			= libft.so

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

# bonus:			$(OBJS) $(BONUS_OBJS)
# 				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

so:				$(OBJS)
				$(CC) -nostartfiles -fPIC -shared -o $(SO_NAME) $(OBJS)

.PHONY:			all clean fclean re bonus