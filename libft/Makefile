# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andsoare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 21:02:30 by andsoare          #+#    #+#              #
#    Updated: 2025/01/24 21:31:15 by andsoare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler
CC = gcc

# Define source files (use wildcard to expand .c files)
CFILES = $(wildcard *.c)

# Define object files (convert .c to .o)
OFILES = $(CFILES:.c=.o)

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Library name
NAME = libft.a

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)

# Rule to compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@echo "Cleaning object files: $(OFILES)"  # Print OFILES for debugging
	$(RM) $(OFILES)

# Remove object files and the library
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean $(NAME)

# Declare non-file targets
.PHONY: all clean fclean re
