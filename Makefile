# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 09:34:57 by yosherau          #+#    #+#              #
#    Updated: 2025/02/01 12:07:15 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c			\
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c		\
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_nbrlen.c		\
					ft_printf.c ft_putchar_fd.c ft_putendl_fd.c ft_puthex.c				\
					ft_putnbr_fd.c ft_putptr.c ft_putstr_fd.c ft_putunbr.c ft_split.c	\
					ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c		\
					ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c		\
					ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c		\
					ft_uitoa_base.c ft_unbrlen.c

BONUS_SRCS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c			\
					ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c		\
					ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS_DIR		=	obj
OBJS			=	$(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))

BONUS_OBJS		=	$(patsubst %.c, $(OBJS_DIR)/%.o, $(BONUS_SRCS))

CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror

NAME			=	libft.a

all:				$(NAME)

RM				=	rm -rf

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)/%.o:	%.c
					mkdir -p $(OBJS_DIR)
					$(CC) $(CFLAGS) -c $< -o $@

bonus:				$(OBJS) $(BONUS_OBJS)
					ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
					$(RM) $(OBJS_DIR)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re bonus

# SO_NAME			=	libft.so

# ifeq ($(MAKECMDGOALS), bonus)
# 	OBJS += $(BONUS_OBJS)
# endif

# so:					$(OBJS)
# 					$(CC) -nostartfiles -fPIC -shared -o $(SO_NAME) $(OBJS)