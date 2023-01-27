# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sara <sara@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 19:24:06 by sara              #+#    #+#              #
#    Updated: 2022/11/25 00:34:28 by sara             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= 	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
						ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
						ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_memcpy.c\
						ft_putchar_fd.c ft_putstr_fd.c ft_strrchr.c ft_tolower.c \
						ft_toupper.c ft_calloc.c ft_memcmp.c ft_memmove.c ft_memset.c \
						ft_putendl_fd.c ft_putnbr_fd.c ft_strlcpy.c ft_strjoin.c \
						ft_striteri.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strtrim.c \
						ft_substr.c ft_itoa.c ft_split.c

BONUS			= ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c \
					ft_lstdelone.c ft_lstclear.c ft_lstiter.c  ft_lstmap.c

OBJS			= $(SRCS:.c=.o)

BOBJS			= $(BONUS:.c=.o)

CC					= gcc
RM					= /bin/rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME) $(BOBJS)

$(NAME):		$(OBJS)
						ar rcs $(NAME) $(OBJS)

clean:
						$(RM) $(OBJS) $(BOBJS)

fclean:			clean
						$(RM) $(NAME)

re:						fclean $(NAME)

bonus:			$(OBJS) $(BOBJS)
						ar rcs $(NAME) $(OBJS) $(BOBJS)

.PHONY:			all clean fclean re bonus