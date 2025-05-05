# Makefile for libft

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -lm -Wall -Wextra -Werror

# Source files
SRCS=imarg.c \
	 iminit.c \
	 iminv.c \
	 immod.c \
	 immul.c \
	 imsum.c \
	 printim.c \
	 imim.c \
	 imre.c

# Object files
OBJS = $(SRCS:.c=.o)

# Library name
LIBRARY = libimnum.a

# Default target
all: $(LIBRARY)

# Rule to create the library
$(LIBRARY): $(OBJS)
	@ar rcs $@ $^

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the library
clean:
	rm -f $(OBJS)

test:
	$(CC) main.c -L. -l:libimnum.a -lm

# Clean up the library
fclean: clean
	rm -f $(LIBRARY)

# Rebuild the library
re: fclean all

.PHONY: all clean fclean re
