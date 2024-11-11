# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 09:34:57 by yosherau          #+#    #+#              #
#    Updated: 2024/11/11 12:12:47 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c			\
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c		\
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c	\
					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
					ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c	\
					ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c		\
					ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRCS		=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c		\
					ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c		\
					ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS			=	$(SRCS:.c=.o)

BONUS_OBJS		=	$(BONUS_SRCS:.c=.o)

CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror

NAME			=	libft.a
#SO_NAME			=	libft.so

ifeq ($(MAKECMDGOALS), bonus)
	OBJS += $(BONUS_OBJS)
endif

all:				$(NAME)

RM				=	rm -f

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)

$(OBJS):			$(SRCS)
#					#$(CC) $(CFLAGS) -c $^

$(BONUS_OBJS):		$(BONUS_SRCS)
#					$(CC) $(CFLAGS) -c $^

bonus:				$(NAME)

clean:				
					$(RM) $(OBJS) $(BONUS_OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean $(NAME)

# so:					$(OBJS)
# 					$(CC) -nostartfiles -fPIC -shared -o $(SO_NAME) $(OBJS)

phony:				all clean fclean re bonus