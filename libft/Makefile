# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andsoare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 21:02:30 by andsoare          #+#    #+#              #
#    Updated: 2025/02/09 13:28:37 by andsoare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFILES = ft_itoa.c ft_atoi.c ft_memset.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strmapi.c ft_strtrim.c ft_split.c ft_strlcat.c ft_strlcpy.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strnstr.c ft_calloc.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files: $(OFILES)"
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
